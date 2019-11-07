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

    int n;  cin >> n;
    string s; cin >> s;

    string arr[n] = {""};

    int cols = inf;

    for(int x=0;x<n;x++){
      int a,b;  cin >> a >> b;
        while(b--) arr[x].push_back(s[x]);

        int bit = s[x] - '0';

        string fi(a,!bit + '0');
        string se(a,bit + '0');

        int chi = 1;

        int tt = 5000;

        while(tt--){
          if(chi) arr[x] += fi , chi = !chi;
          else arr[x] += se , chi = !chi;
        }

        cols = min(cols , (long long )arr[x].size());
        
    }


  

    int ans = 0;
    
    for(int x=0;x<cols ;x++){
      int cnt =0;
      for(int i=0;i<n;i++){
        if(arr[i][x] - '0' == 1) cnt++;
      }
      ans = max(ans , cnt);

    }
    cout << ans;


 return 0;
}
