#include<bits/stdc++.h>
#define int long long

using namespace std;

const int N = 2e5+21;
vector<int> tree[N];
vector<int> path;

int this_node_visited[N] = {-1};

void dfs(int node , int par , int dest){

    if(node == dest) return ;

    for(auto child : tree[node]){
        if(child != par){
            this_node_visited[node] = child;
            dfs(child , node , dest);
        }
    }

}

int road[N];

void simple_DFS(int node){

    if(node != 1) 
        simple_DFS(road[node]);

        cout << node << " ";


}

int32_t main(){

    int n;  cin >> n;
    for(int x=2;x<=n;x++){
        int val;    cin >> val;
        road[x] = val;
        tree[val].push_back(x);
        tree[x].push_back(val);
    }

    //dfs(1,-1,n);

    simple_DFS(road[n]);

    cout << n;


    // for(int x=n; x!= 1 ; ){
    //     cout << this_node_visited[x] << " ";
    //     if(this_node_visited[x] == 1)  break;
    //     x = this_node_visited[x];
    // }

    return 0;
    
}