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

int32_t main(){
    FAST;

       #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string s; cin >> s;

    if(s.size() < 2){
      cout << 0 << endl;
      return 0;
    }

    int num = 0;
    for(auto ch : s) num += ch - '0';
    int ans = 1;

    while(num > 9){
      ans++;
      num = sod(num);
    }

    cout << ans;
    
    return 0;
}
