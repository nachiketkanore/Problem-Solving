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

int32_t main(){
    FAST;

       #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n,k;  cin >> n >> k;
    

    unordered_map<int,int> f;

    for(int x=1;x<=n;x++){
      int t;  cin >> t;
      f[x] = t;
    }

    int l = k , r = k;
    int ans = 0;

    while(l > 0 or r <= n){
      if(l == r and ((f[r] == 1) and  f[l] == 1))
        ans++;
      else if(f[l] == 1 and f[r] == 1)
        ans += 2;
      else if( l < 1 and r <= n){
        if(f[r] == 1) ans++;
      }else if(l >= 1 and r > n){
        if(f[l] == 1) ans++;
      }

      l-- , r++;
    }

    cout << ans;

    
    return 0;
}
