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
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
 	
 	int n,m;	cin >> n >> m;

 	int arr[n];
 	for(int x=0;x<n;x++)	cin >> arr[x];

 	set<int> f;
 	int ans[n];
 	for(int x=n-1;x>=0;x--){
 		f.insert(arr[x]);
 		ans[x] = f.size();
 	}

 	while(m--){
 		int l;	cin >> l;
 		l--;
 		cout << ans[l] << endl;
 	}



    return 0;
}
