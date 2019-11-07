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

int divs(int n){int cnt = 0;for(int x=1;x*x<=n;x++){if(n % x == 0){cnt++;if(n/x != x)cnt++;}}return cnt;}

int isprime(int n){if(n < 2)return false;for(int x=2;x*x<=n;x++)if(n % x == 0) return false;return true;}


const int mod = 1e9+7;
const int inf = 1e18;
const int N = 1e5+20;

int parent[N];
int sum[N];

int32_t main(){
    FAST;

       #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;  cin >> n;
    int ans = 0;

    for(int x=2;x<=n;x++)
      cin >> parent[x];
    
    for(int x=1;x<=n;x++){
      cin >> sum[x];
      if(sum[x] == -1) sum[x] = inf;
    }

    for(int x=1;x<=n;x++)
      sum[parent[x]] = min(sum[parent[x]] , sum[x]);

    // for(int x=1;x<=n;x++)
    //   cout << x << " -> "<< sum[x] << endl;

    for(int x=1;x<=n;x++){
      if(sum[x] < sum[parent[x]]){
        cout << -1;
        return 0;
      }

      if(sum[x] == inf) sum[x] = sum[parent[x]];
      ans += (sum[x] - sum[parent[x]]);
    }
    cout << ans;


    return 0;
}
