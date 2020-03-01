Problem : https://codeforces.com/problemset/problem/600/E

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define rep(x,s,e) for(int x=s;x<=(e);x++)
#define repn for(int x=0;x<n;x++)
#define rep1n for(int x=1;x<=n;x++)
#define rep1m for(int y=1;y<=m;y++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define precise(x) cout << fixed << setprecision(x)
#define bits(x) __builtin_popcountll(x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define sz(x) ((int)(x.size()))
#define test int t; cin>>t; while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef pair<int,int> pii;


void __print(int x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}


template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define see(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define see(x...)
#endif

const int inf = 3e18;
const int N = 1e5 + 5;

int n;
vector<int> g[N];
int col[N], ans[N];

struct DSU{
   map<int,int> subtree[N];
   int par[N], mxFreq[N], currSum[N];

   void init(int n){
      memset(par, 0 , sizeof(par));
      memset(mxFreq, 0 , sizeof(mxFreq));
      memset(currSum, 0 , sizeof(currSum));
      for(int i = 1; i <= n; i++)
         par[i] = i;
   }

   void update(int u , int color){
      int uCount = subtree[u][color];
      if(uCount > mxFreq[u]){
         mxFreq[u] = uCount, currSum[u] = color;
      }else if(uCount == mxFreq[u]){
         currSum[u] += color;
      }
   }

   void merge(int u, int v){
      u = parent(u), v = parent(v);
      if(u == v) return;
      if(sz(subtree[u]) > sz(subtree[v]))
         swap(u , v);
      
      for(auto it : subtree[u]){
         int color = it.first, cnt = it.second;
         subtree[v][color] += cnt,
         update(v, color);
      }
      par[u] = parent(v);
   }

   int parent(int u){
      if(u == par[u])
         return u;
      par[u] = parent(par[u]);
      return par[u];
   }


};
DSU dsu;


void dfs(int u = 1, int par = -1){

   dsu.mxFreq[u] = 1;
   dsu.subtree[u][col[u]]++;  
   dsu.currSum[u] = col[u];

   for(int v : g[u]){
      if(v != par){
         dfs(v, u),  
         dsu.merge(u, v);  
      }
   }
   ans[u] = dsu.currSum[dsu.parent(u)];
}


int32_t main(){ 
   FAST;
   cin >> n;

   for(int i = 1; i <= n; i++)   cin >> col[i];
   for(int i = 1; i < n; i++){
      int u, v;   
      cin >> u >> v;
      g[u].push_back(v),
      g[v].push_back(u);
   }

   dsu.init(n);
   dfs();
   for(int i = 1; i <= n; i++)
      cout << ans[i] << ' ';
}
