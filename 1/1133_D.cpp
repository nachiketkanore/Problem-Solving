#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define umapii unordered_map<int,int>
#define test int t; cin>>t; while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

int solve(vector<int> &a ,vector<int> &b , int n){
    map<long double,int> f;
    int zrzr = 0;

    cout << fixed << setprecision(100);

    for(int x=0;x<n;x++){
        long double fi = a[x] , se = b[x];
        if(fi == 0 and se == 0){
            zrzr++; continue;
        }
        if(se == 0 and fi != 0) {
            f[0]++ ;    continue;
        }
        if(fi == 0) continue;

        long double val = -se/fi;
       // cout << val << endl;

        f[val]++;
    }

    //cout << "zrzr = " << zrzr << endl;

    if(f.size() == 0) return zrzr;

    int ans = 0;
    
    for(auto &x : f){
        ans = max(ans, x.second);
        //cout << "fi = " << x.first << " = " << "se = " << x.second << endl;
    }
    //cout << "ans = " << ans << endl;
    
    return ans + zrzr;

}

int32_t main(){
    FAST;
    int n;  cin>>n;
    vi a(n) , b(n);

    for(int x=0;x<n;x++) cin >> a[x];
    for(int x=0;x<n;x++) cin >> b[x];

    cout << solve(a,b,n) << endl;


    return 0;
}
