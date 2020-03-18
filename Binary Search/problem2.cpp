//Problem : https://www.codechef.com/problems/MINEAT
//Solution : 

#include<bits/stdc++.h>
#define int long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 1e5+10;
const int mod = 998244353;
const int inf = 1e12;
int n, total, a[N];

bool possible(int take){
	int reqHours = 0;
	for(int i = 1; i <= n; i++){
		int t = a[i];
		reqHours += t/take;
		t %= take;
		if(t > 0)
			reqHours++;
	}
	return reqHours <= total;
}


void solve(){
	cin >> n >> total;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	int lo = 1, hi = inf;
	int ans = inf;
	while(lo <= hi){
		int mid = (lo + hi)/2;
		if(possible(mid)){
			ans = min(ans, mid);
			hi = mid - 1;
		}else lo = mid + 1;
	}
	cout << ans << '\n';
}


int32_t main(){
	ios::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

  
   int t;
   cin >> t;
   while(t--)
   	solve();
}
