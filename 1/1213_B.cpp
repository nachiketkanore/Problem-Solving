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
    test{
        int n;  cin >> n;
        int a[n];   for(int x=0;x<n;x++)    cin >> a[x];

        int ans =0;

        int suff[n];
        for(int x=0;x<n;x++)    suff[x] = a[x];

        for(int x=n-2;x>=0;x--){
            suff[x] = min(suff[x+1] , suff[x]);
        }

        for(int x=0;x<n-1;x++){
            int num = a[x];
            if(num > suff[x+1]) ans++;
        }

        cout << ans << '\n';

    }
    

    return 0;
}
