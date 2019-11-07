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

int sod(int n){int sum =0;while(n > 0){sum += n %10;n /= 10;}return sum;}

int dig(int n){int cnt =0;while(n > 0){n /= 10;cnt++;}return cnt;}

int divs(int n){int cnt = 0;for(int x=1;x*x<=n;x++)
  {if(n % x == 0){cnt++;if(n/x != x)cnt++;}}return cnt;}

const int mod = 1e9+7;
const int inf = 1e18;
const int N = 1e5+100;

vector<int> tree[N];
int sz[N];

void dfs(int node = 1 ,int par = 0){

  sz[node] = 1;

  for(auto child : tree[node]){
    if(child != par){
      dfs(child , node);
      sz[node] += sz[child];
    }
  }

}


int32_t main(){
    FAST;

       #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;  cin>> n;
    int e = n-1;

    for(int x=0;x<e;x++){
      int u,v;  cin >> u >> v;
      tree[u].pb(v) , tree[v].pb(u);
    }

    if(n % 2){
      cout << -1;
      return 0;
    }

    dfs();

    int ans = 0;

    for(int x=1;x<=n;x++){
      if(sz[x] % 2 == 0 and x != 1) ans++;
    }

    cout << ans;
    
    
    return 0;
}
