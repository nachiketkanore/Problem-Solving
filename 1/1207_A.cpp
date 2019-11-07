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
        int b , p ,f , h , c;   
        cin >> b >> p >> f >> h >> c;
        int ans = 0;
        for(int x=0;x<=p;x++){
            for(int y=0;y<=f;y++){
                if(x+y <= p+f and (2*(x+y) <= b)){
                    ans = max(ans, (h*(x) + c*(y)));
                        //cout << h << "*" << x << " + " << c << "*" <<y << endl;
                    }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
