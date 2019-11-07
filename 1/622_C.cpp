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
const int inf = 1e18;


int32_t main(){
    FAST;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 	int n;	cin >> n;
 	int m;	cin >> m;
 	int a[n+3];	for(int x=1;x<=n;x++)	cin >> a[x];

 	int par[n+3] = {0};

 	for(int x=1;x<=n;x++){
 		if(a[x] != a[x-1])
 			par[x] = x-1;
 		else par[x] = par[x-1];
 	}

 	while(m--){
 		int l , r , val;
 		cin >> l >> r >> val;
 		if(a[r] != val)
 			cout << r << '\n';
 		else{
 			if(par[r] >= l)	cout << par[r] << '\n';
 			else cout << "-1\n";
 		}
 	}
    


    return 0;
}
