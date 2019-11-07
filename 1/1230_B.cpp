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

int sod(int n){
  int sum =0;
  while(n > 0){
    sum += n %10;
    n /= 10;
  }
  return sum;
}

int dig(int n){
  int cnt =0;
  while(n > 0){
    n /= 10;
    cnt++;
  }

  return cnt;
}

int divs(int n){
  int cnt = 0;
  for(int x=1;x*x<=n;x++){
    if(n % x == 0){
      cnt++;
      if(n/x != x)
        cnt++;
    }
  }
  return cnt;
}

const int MOD = 1073741824;

int32_t main(){
    FAST;

    //   #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int n,k;  cin>> n >> k;
    string s; cin >> s;

    if(n == 1 and s[0] == '0'){
      cout << 0 << endl;
      return 0;
    }

    if(n == 1 and k == 0){
      cout << s[0] << endl;
      return 0;
    }

    if(n == 1 and k == 1){
     
        cout << 0 << endl;
     
        return 0;
     
    }

    string t;
    t.pb('1');
    for(int x=0;x<s.size()-1;x++) t.pb('0');

    //   cout << s << endl;
    // cout << t << endl;

    string ans;

    for(int x=0;x<n;x++){
      if(s[x] == t[x]){
        ans.pb(s[x]);
        continue;
      }

      if(k > 0){
        ans.pb(t[x]);
        k--;
        continue;
      }

      ans.pb(s[x]);

    }

    cout << ans << endl;

    return 0;
}