#include<bits/stdc++.h>

using namespace std;

typedef int item;

typedef struct Node{
	int value;
	Node * right;
	Node * left;
} node;

node * insert(node * root, int new_value) {
	if(root == NULL) {
		root = (node*)malloc(sizeof(node));
		root->value = new_value;
		root->right = NULL;
		root->left = NULL;
		return root;
	}
	if(new_value <= root->value) {
		root->left = insert(root->left, new_value);
		return root;
	}
	root->right = insert(root->right, new_value);
	return root;
}

void inorder(node * root) {
	if(root == NULL)
		return;
	inorder(root->left);
	cout << root->value << " ";
	inorder(root->right);
	return;
}

void preorder(node * root) {
	if(root == NULL)
		return;
	cout << root->value << " ";
	preorder(root->left);
	preorder(root->right);
	return;
}

void postorder(node * root) {
	if(root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->value << " ";
	return;
}

int main () {
	node * root;
	root = NULL;
	int c;
	cin >> c;
	while(c) {
		root = insert(root, c);
		cin >> c;
	}
	inorder(root);
	cout << endl;
	return 0;
}
