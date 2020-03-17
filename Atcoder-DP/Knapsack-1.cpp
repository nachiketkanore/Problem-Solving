//Top-down with memoization


//Recursive without memoization


//It's time to be who I am, rather than who I am supposed to be.
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int inf = 1e12;
const int N = 105;

int n, total, weight[N], value[N];

int solve(int item, int remain){
	if(remain < 0)
		return -inf;
	if(remain == 0 || item == 0)
		return 0;

	int take = value[item] + solve(item - 1, remain - weight[item]);
	int dont_take = solve(item - 1, remain);
	return max(take, dont_take);
}

int32_t main(){ 
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	cin >> n >> total;
	for(int i = 1; i <= n; i++)
		cin >> weight[i] >> value[i];

	cout << solve(n, total) << '\n';
    
}
