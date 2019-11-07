#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1000;
vector<int> tree[N];
int lev;
vector<int> path;

void cal(int node = 1 , int par = -1){

    if(tree[node].size() == 1 and node != 1)
        lev++;

        for(auto child : tree[node]){
            if(child != par) 
                cal(child , node);
        }


}


bool dfs(int from , int to  , int par){

    if(from == to)
        return 1;

    for(auto child : tree[from]){

        if(child == par)    continue;

        if(dfs(child , to , from)){
            path.push_back(from);
            return 1;
        }

    }

    return 0;

}

int32_t main(){

    int n;  cin >> n;
    for(int x=0;x<n-1;x++){
        int u ,v;   cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    cal();
    
    int from = 1 , to;

    path.push_back(from);

    for(int x=0;x<lev;x++){

        cin >> to;
        dfs(to, from , 0);
        from = to;

    }


    dfs(1, from , 0);

    if(path.size() != 2*n-1){
        cout << -1; return 0;
    }

    for(auto g : path) 
        cout << g << ' ';


    return 0;
}