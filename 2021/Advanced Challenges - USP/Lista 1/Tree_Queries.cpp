#include<bits/stdc++.h>
     
using namespace std;
     
#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())
     
int N, t = 0, bottom = 0;
vector<int> neighbor[2000000];
int height[200000], father[200000];
vector<int> query;
pair<int, int> indexes[200000]; //preorder and posorder

/*
   A é ancestral de B se
   pre[A] <= pre[B] && pos[A] >= pos[B]
 */

bool func() {
    for(int i = 0; i < query.size(); i++) {
        if(!(indexes[query[i]].first <= indexes[bottom].first && indexes[query[i]].second >= indexes[bottom].second)) 
            return false;
    }
    return true;
}

void dfs (int f = -1, int i = 0) {
    
   	if(f != -1) {
        height[i] = height[f] + 1;
        father[i] = f;
    } else {
        height[i] = 0;
        father[i] = 0;
    }
    
    indexes[i].first = ++t;
    for(int j = 0; j < neighbor[i].size(); j++)  {
        if(neighbor[i][j] != f)
        dfs(i, neighbor[i][j]);
    }
    indexes[i].second = ++t;
    
    return;
}
     
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int N, M, u, v, m, x;
    cin >> N >> M;
     
    for(int i = 0; i < N - 1; i++) {
        cin >> u >> v;
        neighbor[u-1].push_back(v-1);
        neighbor[v-1].push_back(u-1);
    }
    
    dfs();

    for(int i = 0; i < M; i++) {
        cin >> m;
        query.resize(m);
        bottom = 0;
        for(int j = 0; j < m; j++) {
            cin >> x;
            query[j] = father[x-1];
            if(height[x-1] > height[bottom])
                bottom = x - 1;
        }
        cout << (func() ? "YES" : "NO") << endl;
    }

    return 0;
}
