// C++ program to implement persistent segment tree.
#include "bits/stdc++.h"
using namespace std;
  
#define MAXN 100000000
  
/* data type for individual
 * node in the segment tree */
struct node
{
    // stores sum of the elements in node
    int val;
  
    // pointer to left and right children
    node* left, *right;
  
    // required constructors........
    node() {}
    node(node* l, node* r, int v)
    {
        left = l;
        right = r;
        val = v;
    }
};
  
// input array
int arr[MAXN];
  
// root pointers for all versions
node* version[MAXN];
  
// Constructs Version-0
// Time Complexity : O(nlogn)
void build(node* n,int low,int high)
{
    if (low==high)
    {
        n->val = arr[low];
        return;
    }
    int mid = (low+high) / 2;
    n->left = new node(NULL, NULL, 0);
    n->right = new node(NULL, NULL, 0);
    build(n->left, low, mid);
    build(n->right, mid+1, high);
    n->val = n->left->val + n->right->val;
}
  
/**
 * Upgrades to new Version
 * @param prev : points to node of previous version
 * @param cur  : points to node of current version
 * Time Complexity : O(logn)
 * Space Complexity : O(logn)  */

void upgrade(node* prev, node* cur, int low, int high,
                                   int idx, int value)
{
    if (idx > high or idx < low or low > high)
        return;
  
    if (low == high)
    {
        // modification in new version
        cur->val = value + prev->val;
        return;
    }
    int mid = (low+high) / 2;
    if (idx <= mid)
    {
        // link to right child of previous version
        cur->right = prev->right;
  
        // create new node in current version
        cur->left = new node(NULL, NULL, 0);
  
        upgrade(prev->left,cur->left, low, mid, idx, value);
    }
    else
    {
        // link to left child of previous version
        cur->left = prev->left;
  
        // create new node for current version
        cur->right = new node(NULL, NULL, 0);
  
        upgrade(prev->right, cur->right, mid+1, high, idx, value);
    }
  
    // calculating data for current version
    // by combining previous version and current
    // modification
    cur->val = cur->left->val + cur->right->val;
}
  
int query(node* n, int low, int high, int l, int r)
{
    if (l > high or r < low or low > high)
       return 0;
    if (l <= low and high <= r)
       return n->val;
    int mid = (low+high) / 2;
    int p1 = query(n->left,low,mid,l,r);
    int p2 = query(n->right,mid+1,high,l,r);
    return p1+p2;
}
  
int main(int argc, char const *argv[])
{
    int n, Q;
    
    cin >> n;
    for (int i=0; i<n; i++) 
       cin >> arr[i];
  
    cin >> Q;
    
    // creating Version-0
    node* root = new node(NULL, NULL, 0);
    build(root, 0, n-1);
  
    // storing root node for version-0
    version[0] = root;
  
    int type, idx, k = 1, pos, v;
    for(int i = 0; i < Q; i++) {
        cin >> type >> idx >> pos >> v;
        if(type == 1) {
            version[k] = new node(NULL, NULL, 0);
            upgrade(version[idx], version[k], 0, n-1, pos-1, v);
            k++;
        } else {
            cout << query(version[idx], 0, n-1, pos-1, v-1) << endl;
        }
    }
    return 0;
}
