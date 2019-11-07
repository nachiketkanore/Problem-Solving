#include <bits/stdc++.h>
using namespace std;

    vector <int> G[100005];
    bool visited[100005] = {false};
    long long gold[100005] = {0};
    

    // void addedge(int a , int b){
    //     G[a].push_back(b);
    //     G[b].push_back(a);
    // }

    long long DFS(long long current_node){

        if(visited[current_node])
            return 0;
        
        visited[current_node] = true;

        long long val = gold[current_node];

        for(int x=0;x<G[current_node].size();x++){

            if(!visited[G[current_node][x]])
                val = min(val,DFS(G[current_node][x]));

        }

        return val;

    }


int main(){

    int n,e;
    cin>>n>>e;

    for(long x=1;x<=n;x++)
        cin>>gold[x];

    while(e--){

        long a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);

    }

    long long int ans = 0;

    for(long long int x=1;x<=n;x++)
        ans += DFS(x);

    cout<<ans<<endl;


    return 0;
}