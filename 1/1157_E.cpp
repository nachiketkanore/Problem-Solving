#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include<bits/stdc++.h>
#define int long long
#define test int t;cin >> t;while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

typedef pair<int,int> pii;

const int N = 5e5+21;
int n;
multiset<int> f;

signed main(){
    FAST;
    cin >> n;
    int a[n];   for(int x=0;x<n;x++)    cin >> a[x];
    for(int x=0;x<n;x++){
        int nt; cin >> nt;
        f.insert(nt);
    }

    for(int x=0;x<n;x++){
        auto it = f.lower_bound(n-a[x]);
        if(it == f.end()) it = f.begin();

        cout << (a[x] + *it) % n << ' ';
        f.erase(it);
    }
   
    
   
    return 0;
}