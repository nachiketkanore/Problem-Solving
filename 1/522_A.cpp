#include<bits/stdc++.h>
#define int long long
using namespace std;

const string root = "polycarp";

map<string,vector<string>> tree;

int ans = 0;

void dfs(string node , string par ,int level){

    ans = max(ans , level);

    for(auto child : tree[node]){
        if(child == par) continue;

        dfs(child , node , level+1);
    }

}

int32_t main(){

    int n;  cin >> n;
    for(int x=0;x<n;x++){
        string u , v;
        cin >> u >> v >> v;

        transform(u.begin(), u.end() , u.begin() , ::tolower);
        transform(v.begin(), v.end() , v.begin() , ::tolower);

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(root,"-1",1);

    cout << ans << endl;


    return 0;
}