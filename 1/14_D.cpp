#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 300;
vector<int> tree[N];
int n;

void dfs_one(int node, int par , int level , vector<int> &dist){

    dist[node] = level;

    for(auto child : tree[node]){

        if(child != par){
            dfs_one(child , node ,level+1 , dist);
        }

    }


}


void dfs_two(int node, int par , int level , vector<int> &dist , int exclude){

    dist[node] = level;

    for(auto child : tree[node]){
        if(child != par and child != exclude)
            dfs_two(child , node , level+1 ,dist , exclude);
    }

}


int cal_diameter(int node , int exclude){

    vector<int> distances_one(N,0) , distances_two(N,0);

    dfs_one(node ,exclude ,0 , distances_one);
    int farthest = node;

    for(int x=1;x<=n;x++){
        if(distances_one[farthest] < distances_one[x])
            farthest = x;
    }

    dfs_two(farthest , -1 , 0 , distances_two , exclude);

   int diam = 0;

   for(int x=1;x<=n;x++){
       diam = max(diam , distances_two[x]);
   } 

   return diam;

}

int32_t main(){

    cin >> n;
	vector<pair<int,int>> edges(n-1);
	for(int x=0;x<n-1;x++){
		int u ,v;	cin >> u >> v;
		tree[u].push_back(v);
		tree[v].push_back(u);
		edges[x].first = u , edges[x].second = v;
	}

	int answer = 0;

	for(auto edge : edges){
		int nd1 = edge.first , nd2 = edge.second;

		int diam1 = cal_diameter(nd1 , nd2);
		int diam2 = cal_diameter(nd2 , nd1);

		answer = max(answer , diam1 * diam2);

	}

	

	cout << answer << '\n';


    return 0;
}