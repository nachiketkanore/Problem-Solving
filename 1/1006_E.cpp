#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N = 2e5+21;
vector<int> tree[N];
int sz[N];
vector<int> path;
int first_index[N];

void dfs(int node = 1 , int par = -1){

    sz[node] = 1;
    first_index[node] = path.size();
    path.push_back(node);

    for(auto child : tree[node]){
        if(child != par){
            dfs(child , node);
            sz[node] += sz[child];
        }
    }

}

signed main(){

    int n,q;    cin >> n >> q;

    for(int x=0;x<n-1;x++){
        int par;    cin >> par;
        tree[x+2].push_back(par);
        tree[par].push_back(x+2);
    }

    dfs();

    // for(auto x : path)  cout << x << ' ';   cout << endl;
    // for(int x=1;x<=n;x++){
    //     cout << "Node = " << x << " , FI = " << first_index[x] << '\n';
    // }

    while(q--){
        int node , k;   cin >> node >> k;
        if(k > sz[node]){
            cout << -1 << '\n';
            continue;
        }else{
            int fi = first_index[node];
            int sub_sz = sz[node];

            cout << path[fi + k-1] << '\n';
        }
    }

    return 0;
}