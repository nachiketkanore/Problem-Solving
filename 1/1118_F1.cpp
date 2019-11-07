#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 4e5;
vector<int> tree[N];
vector<int> vis(N,0) , red(N,0) , blue(N,0), color(N,0);
int nr , nb , ans;


void dfs(int node){

    vis[node] = 1;

    blue[node] += (color[node] == 2);
    red[node] += (color[node] == 1);

    for(auto child : tree[node]){

        if(!vis[child]){
            dfs(child);

            red[node] += red[child];
            blue[node] += blue[child];

            ans += red[child] == nr && blue[child] == 0LL;
            ans += blue[child] == nb && red[child] == 0LL;

        }

    }

}

int32_t main(){

    int n;  cin >> n;
    for(int x=1;x<=n;x++){
        cin >> color[x];
        nb += color[x] == 2;
        nr += color[x] == 1;
    }

    for(int x=0;x<n-1;x++){
        int u,v;    cin >> u >> v;
        tree[u].push_back(v) , tree[v].push_back(u);
    }

    dfs(1);
    cout << ans;

    return 0;
}