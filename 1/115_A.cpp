#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 4e4+21;

int height = 0;

vector<int> tree[N];
vector<int> level[N];

int dfs(int node ,int par ,int level){

    height = max(height ,level);

    for(auto child : tree[node]){
        if(child == par)    continue;
        dfs(child , node , level+1);
    }

    return height;
}

int32_t main(){
    int n;  cin >> n;
    int alone_nodes = 0;

    for(int x=0;x<n;x++){
        int par, child = (x+1);
        cin >> par;
        if(par == -1) continue;

        tree[par].push_back(child);
        //tree[child].push_back(par);

    }

    int alone = 0;

    for(int x=1;x<=n;x++)
        alone += (tree[x].size() == 0);

    if(alone == n){
        cout << 1 << endl;
        return 0;
    }

    // for(int x=1;x<=n;x++)
    //     if(tree[x].size() == 0) alone_nodes++;
    

    //cout << "Alone = " << alone_nodes << endl;

    int ans = INT16_MIN;

    for(int x=1;x<=n;x++){
        int node = x;

        if(tree[node].size() == 0) continue;

        int ht = dfs(x,-1,1);

        //cout << "Height of tree considering " << node << " as root is " << ht << endl;
        
        height = 0;
        //for(int i=1;i<=n;i++) level[i].clear();

        ans = max(ans, ht);

    }


    cout << ans << endl;

    return 0;
}