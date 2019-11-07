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
unordered_map<int,int> f;
unordered_map<int,vector<int>> occu;

int32_t main(){
    FAST;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 	
 	int n;	cin >> n;

 	int most = 0;

 	int a[n];	for(int x=0;x<n;x++){
 		cin >> a[x];
 		occu[a[x]].push_back(x);
 		f[a[x]]++;
 		most = max(most , f[a[x]]);
 	}

 	vector<int> nos;

 	for(int x=0;x<n;x++){
 		if(f[a[x]] == most)
 			nos.push_back(a[x]);
 	}

 	int ans = inf;
 	int first = 0 , second = 0;

 	// for(auto no : nos)
 	// 	cout << no << "#\n";

 	for(auto no : nos){
 		int num = no;
 		int l = 0 , r  = n-1;

 		l = occu[num][0];
 		r = occu[num][occu[num].size()-1];
 		int len = r-l+1;

 		if(ans > len){
 			first = l+1;
 			second = r+1;
 			ans = min(ans,  len);
 		}

 	}

 	cout << first << " " << second << endl;

	

    return 0;
}
