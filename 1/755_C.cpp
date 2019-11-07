#include<bits/stdc++.h>
#define int long long

using namespace std;

const int N = 2e5+21;
vector<int> tree[N];
int visited[N];

void dfs(int node , int par){

    visited[node] = 1;

    for(auto child : tree[node]){
        if(child == par) continue;

        dfs(child , node);
    }

}


int32_t main(){

    int n;  cin >> n;
    
    for(int x=1;x<=n;x++){
        int par;    cin >> par;
        tree[par].push_back(x);
        tree[x].push_back(par);
    }

    int ans = 0;

    for(int x=1;x<=n;x++){

        if(!visited[x]){
            ans++;
            dfs(x,-1);
        }

    }

    cout << ans << endl;

    return 0;
}

