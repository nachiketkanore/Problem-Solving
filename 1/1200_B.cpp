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

string solve(int *h , int n , int bag , int k){

    for(int x=0;x<n-1;x++){
        int st = max(0LL,h[x+1] - k);
        bag += (h[x] - st);

        if(bag < 0) return "NO";

    }
    return "YES";

}

int32_t main(){
    FAST;
    
    test{
        int n,m,k;  cin >> n >> m >> k;
        int h[n];   for(int x=0;x<n;x++) cin >> h[x];

        cout << solve(h,n,m,k) << endl;
    }

    return 0;
}
