//Problem : https://www.codechef.com/problems/FORESTGA
//Solution : 

#include<bits/stdc++.h>
#define int long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 1e5+10;
const int mod = 998244353;
const int inf = 1e18;
int n, want, limit, height[N], rate[N];

bool isOverflow(int a, int b){
    int result = a * b; 
    return (a != (result / b));     
} 

bool possible(int month){
	int canCut = 0;
	for(int i = 1; i <= n; i++){
		if(isOverflow(month, rate[i]))
			continue;
		int newHeight = height[i] + month * rate[i];
		if(newHeight >= limit){
			canCut += newHeight;
		}
		if(canCut >= want)
			break;
	}
	return canCut >= want;
}

void solve(){

	cin >> n >> want >> limit;
	for(int i = 1; i <= n; i++){
		cin >> height[i] >> rate[i];
	}

	int ans = inf;
	int lo = 0LL, hi = want;
	while(lo <= hi){
		int mid = (lo + hi)/2;
		if(possible(mid)){
			ans = mid;
			hi = mid - 1;
		}else lo = mid + 1;
	}
	cout << ans << '\n';
}


int32_t main(){
	ios::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

   	solve();
}
