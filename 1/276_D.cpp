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
const int N = 2e6 + 21;

int ans(int l , int r){
    int t = l ^ r;
    
    vi num;

    while(t > 0){
        num.pb(t&1);
        t>>=1;
    }

    reverse(all(num));

    for(auto &x : num)
        if(x == 0) x = 1; 
    
    int ans = 0;

    for(int x=0;x<num.size();x++) 
        ans += (pow(2,x));

    return ans;

}

int32_t main(){
    FAST;
    int l,r;    cin >> l >> r;
    cout << ans(l,r) << endl;

    return 0;
}
