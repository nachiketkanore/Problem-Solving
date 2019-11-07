#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define precise(x) cout << fixed << setprecision(x)
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
typedef unordered_map<int,int> mp;

const int mod = 1e9+7;
const int inf = 1e18;

const int N = 2e5+21;
vector<int> g[N];
int vis[N];


void dfs(int node){

  vis[node] = 1;

  for(auto child : g[node]){
    if(!vis[child]) 
      dfs(child);
  }

}

int32_t main(){
    FAST;

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
   int n; cin>>n;
   int k; cin>>k;

   for(int x=0;x<k;x++){
      int fi ,se; cin>> fi >> se;
      g[fi].pb(se) , g[se].pb(fi);
   }


   int concomp = 0;

   for(int x=1;x<=n;x++){
      if(vis[x]) continue;

      concomp++;
      dfs(x);
   }

   cout << (k - n + concomp) << '\n';

    return 0;
}
