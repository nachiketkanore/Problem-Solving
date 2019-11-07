// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N = 2e5;
vector<int> tree[N];
int deg[N];
vector<int> deg_vert[N];
int max_deg;

int32_t main(){

    int n;  cin >> n;
    for(int x=1;x<n;x++){
        int u,v;    cin >> u >> v;
        tree[u].push_back(v) , tree[v].push_back(u);
        deg[u]++ , deg[v]++;
        max_deg = max(max_deg  , max(deg[u] , deg[v]));
    }


    for(int x=1;x<=n;x++){
        deg_vert[deg[x]].push_back(x);
    }

    if(max_deg == 1){
        cout << "Yes" << endl;
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        return 0;
    }

    if(max_deg == 2){
        cout << "Yes" << endl;
        cout << 1 << endl;
        cout << deg_vert[1][0] << " " << deg_vert[1][1] << endl;
        return 0;
    }

    // cout << deg_vert[1].size() << endl;
    // cout << deg_vert[2].size() << endl;
    // cout << deg_vert[3].size() << endl;
    // cout << deg_vert[4].size() << endl;

    int mx_cnt = deg_vert[max_deg].size();
    int one = deg_vert[1].size() + deg_vert[2].size();

    //cout << mx_cnt << " " << one << endl;

    if((mx_cnt == 1) and (one == n-1)){
        cout << "Yes" << endl;
        cout << deg_vert[1].size() << endl;

        for(int x=0;x<deg_vert[1].size();x++)
            cout << deg_vert[max_deg][0] << " "<< deg_vert[1][x] << endl;

            return 0;

    }
  
    cout << "No" << endl;
    return 0;
}