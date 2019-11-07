#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 4e5;
vector<int> tree[N];

int nodes_below_fi_root[N];
int nodes_below_se_root[N];


void dfs(int node ,int par , int *nodes_below){
    nodes_below[node] = 1;
        for(auto child : tree[node]){
            if(child != par){
                dfs(child , node ,nodes_below);
                nodes_below[node]  += nodes_below[child];
            }
        }
}

int32_t main(){

    int n , fi , se;    cin >> n >> fi >> se;
    
    for(int x=0;x<n-1;x++){
        int u,v;    cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    int total = n*(n-1);

    //Make fi root and find nodes below se

    dfs(fi,-1,nodes_below_fi_root);
    int num1 = nodes_below_fi_root[se];


    //Make se root and find nodes below fi

    dfs(se,-1,nodes_below_se_root);
    int num2 = nodes_below_se_root[fi];

    int ans = (total - num1*num2);

    cout << ans << '\n';

    return 0;
}