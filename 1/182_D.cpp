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

    string a,b; cin >> a >> b;
    
    unordered_map<string,int> mp;
    string t = "";

    for(int x=0;x< a.size() ;x++){
        t.pb(a[x]);

        //cout << "t is : " << t << " => " << a.size() / t.size() << endl;

        if(a.size() % t.size() == 0){
            int times = a.size() / t.size();
            string tt = "";
            while(times--) tt += t;
            //cout << "tt is : " << tt << endl;
            if(tt == a) mp[t]++;
        }
    }

    string m = "";

    int ans = 0;

    for(int x=0;x< b.size() ;x++){
        m.pb(b[x]);

        //cout << "t is : " << t << " => " << a.size() / t.size() << endl;

        if(b.size() % m.size() == 0){
            int times = b.size() / m.size();
            string mm = "";
            while(times--) mm += m;
            //cout << "tt is : " << tt << endl;
            if(mm == b) mp[m]++;

            if(mp[m] == 2) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
