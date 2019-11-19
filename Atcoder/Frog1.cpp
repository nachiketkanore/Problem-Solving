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
typedef unordered_map<int,int> mp;

const int mod = 1e9+7;
const int inf = 1e17+21;



int32_t main(){
    FAST;

   int n;   cin >> n;
   int h[n+2];
   for(int x=1;x<=n;x++)    cin >> h[x];

   int dp[n+2] = {inf};

    dp[1] = 0 , dp[2] = abs(h[2] - h[1]);

    for(int x=3;x<=n;x++){

        dp[x] = min(dp[x-1] + abs(h[x] - h[x-1]) , dp[x-2] + abs(h[x] - h[x-2]));

    }

     cout << dp[n];



    return 0;
}
