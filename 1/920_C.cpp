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


int32_t main(){
    FAST;
   int n;   cin>> n;
    vi a(n+1) ;   for(int x=1;x<=n;x++)    cin>> a[x];

    string s;   cin >> s;   s = "0" + s;

    int mx = 0;

    for(int x=1;x<=n;x++){
        mx = max(mx , a[x]);

        if(s[x] == '0' and mx > x) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
