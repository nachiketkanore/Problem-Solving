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
    
   int n; cin >> n;
   vector<int> divs;

   string s;  cin >> s;

   for(int x=1;x<=n;x++){
    if(n % x== 0) divs.push_back(x);
   }

   for(auto x : divs){

    int f = x;

    string temp = s;
    string rev = s.substr(0,f);
    reverse(all(rev));

    string other = s.substr(f);

    s = rev + other;


   }

   cout << s << endl;
  

    return 0;
}
