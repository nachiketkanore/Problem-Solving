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


int32_t main(){
    FAST;
   
    int n;  cin>> n;
    int a[n];   for(int x=0;x<n;x++)    cin >> a[x];

    int q;  cin >> q;
    while(q--){
        int t;  cin >> t;
        if(t == 1){
            int l , r;  cin >> l >> r; l-- , r--;
            int sum = 0;
            for(int x=l;x<=r ;x++)  sum += a[x];
            cout << sum << endl;
        }else{
            int l , r , val;   cin >> l >> r >> val;
            l-- , r--;
            for(int x=l;x<=r;x++) a[x] ^= val;
            
        }
    }

    return 0;
}
