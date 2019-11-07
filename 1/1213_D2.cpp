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
const int N = 2e5+21;

vector<int> nachi[N];

int32_t main(){
    FAST;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 	
 	int n;	cin >> n;
 	int k;	cin >> k;

 	int a[n];	for(int x=0;x<n;x++)	cin >> a[x];

 	for(int x=0;x<n;x++){
 		int num =a[x];
 		int cnt = 0;
 		while(num > 0){
 			nachi[num].push_back(cnt);
 			num >>= 1;
 			cnt++;
 		}
 	}

 	int ans = inf;

 	for(int x=0;x<N;x++){
 		if(nachi[x].size() < k) continue;
 		sort(nachi[x].begin() , nachi[x].end());
 		int curr = 0;
 		for(int i =0;i<k;i++)
 				curr += nachi[x][i];
 		ans = min(ans , curr);
 	}
 	
	cout << ans;

    return 0;
}
