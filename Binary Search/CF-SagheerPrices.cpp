//Problem : https://codeforces.com/contest/812/problem/C

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int inf = 1e18;
const int N = 1e5+10;
int n, budget, a[N];

array<int,2> possible(int mid){
	int val = 0, len = mid;
	int new_costs[n+1] = {0};

	for(int i = 1; i <= n; i++){
		new_costs[i] = a[i] + len * i;
	}
	sort(new_costs + 1, new_costs + n + 1);

	for(int i = 1; i <= mid; i++)
		val += new_costs[i];

	if(val <= budget)
		return {1, val};
	return {0,inf};
}

int32_t main(){ 
   ios::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

    cin >> n >> budget;
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    }

   	array<int,2> ans = {0, inf};
   	int lo = 0, hi = n;

   	while(lo <= hi){
   		int mid = (lo + hi)/2;
   		array<int,2> solve = possible(mid);
   		if(solve[0]){
   			ans = max(ans, {mid, solve[1]});
   			lo = mid + 1;
   		}else{
   			hi = mid - 1;
   		}
   	}
	if(ans[1] == inf) ans[1] = 0;
	assert(possible(ans[0])[0]);
	cout << ans[0] << ' ' << ans[1] << '\n';
}
