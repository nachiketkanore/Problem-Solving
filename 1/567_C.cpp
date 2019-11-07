#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define precise(x) cout << fixed << setprecision(x)
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
 	
	int n,k;	cin >> n >> k;
	int a[n];
	unordered_map<int,int> fr,fl;
	for(int x=0;x<n;x++){
		cin >> a[x];
		fr[a[x]]++;
	} 	

	int ans = 0;

	for(int x=0;x<n;x++){
		int left = 0, right =0;

		if(a[x] % k == 0)
			left = fl[a[x]/k];

		fr[a[x]]--;

			right = fr[a[x] * k];
		fl[a[x]]++;
		ans += left * right;
	}
	cout << ans;

    return 0;
}
