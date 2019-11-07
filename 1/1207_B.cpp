#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define mp make_pair
#define test int t; cin>>t; while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef pair<int,int> pii;
typedef unordered_map<int,int> umapii;

const int mod = 1e9+7;



int32_t main(){
    FAST;

    int n,m;    cin >> n >> m;

    int mat1[n+1][m+1];
    for(int x=1;x<=n;x++)   for(int y=1;y<=m;y++)   cin >> mat1[x][y];


    int done[n+1][m+1];
    for(int x=1;x<=n;x++)   for(int y=1;y<=m;y++)   done[x][y] = 0;

    vii ans;

    for(int x=1;x<n;x++){
        for(int y=1;y<m;y++){
            //if(done[x][y]) continue;
            int fi = mat1[x][y] ,se = mat1[x+1][y] , th = mat1[x][y+1] , fr = mat1[x+1][y+1];
            if(fi == 1 and se ==1 and th ==1 and fr ==1){
                 done[x][y] = 1 , done[x+1][y] = 1 , done[x][y+1] = 1 , done[x+1][y+1] = 1;
                ans.pb(make_pair(x,y));
            }
        }
    }

        for(int x=1;x<=n;x++) {  for(int y=1;y<=m;y++) 
            if(mat1[x][y] != done[x][y]){
                cout << -1 << endl;
                return 0;
            }
        }

        cout << ans.size() << endl;
        for(auto it : ans){
            cout << it.first << " " << it.second << endl;
        }


   
    return 0;
}
