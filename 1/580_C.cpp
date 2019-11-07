#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned ll
using namespace std;

vector<int> G[100005];
int visited[100005];
int cats[100005];
int maxok = 0;

int dfs(int vertex,int catsbefore){

	if(visited[vertex] == 1)
		return 0;

	visited[vertex] = 1;

	int catssofar = (cats[vertex]) ? (catsbefore+1) : 0 ;

	if(catssofar > maxok)
		return 0;

	if(G[vertex].size() == 1 and visited[G[vertex][0]] == 1)
		return 1;

	int count = 0;

	for(int x = 0 ; x < G[vertex].size() ; x++)
		count += dfs(G[vertex][x], catssofar);

	return count;

}

int main(){
	
	int n;
	cin>>n>>maxok;

	// G.assign(n+1 , vector<int> ());
	// visited.assign(n+1 ,0);

	
	for(int x =1 ; x<= n;x++) cin>>cats[x];
	

	for(int x= 0;x< n-1 ;x++){

		int a,b;
		cin>>a>>b;

		G[a].push_back(b);
		G[b].push_back(a);

	}

	int ans = dfs(1 , 0);

	cout<<ans<<endl;

	return 0;
}