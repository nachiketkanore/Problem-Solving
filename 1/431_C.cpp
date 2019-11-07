// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N = 1010;
int dp[N][N];
int n , k , d;
int ans;

int solve(int curr_weight  , int state){

	if(dp[curr_weight][state] != -1)
		return dp[curr_weight][state];
	else if(curr_weight > n)
		dp[curr_weight][state] = 0;
	else if(curr_weight == n and state == 1)
		dp[curr_weight][state] = 1;
	else {	//if curr_weight < n , then we need to solve for children of this node
	
		int ret = 0;

		for(int x=1;x<=k;x++){
			if(curr_weight + x <= n){
				bool condition = (state == 1 or ((x >= d) ? 1 : 0)  ) ;
				ret += solve(curr_weight + x ,  condition );
				ret %= (int)(1e9+7);
			}
		}

		dp[curr_weight][state] = ret;

	}

	return dp[curr_weight][state];

}

int32_t main(){

	cin >> n >> k >> d;
	memset(dp , -1 , sizeof(dp));

	for(int x=1;x<=k;x++){

		ans += solve(x , (x >= d) ? 1 : 0);
		ans %= (int)(1e9+7);
	}

	cout << ans << endl;
	
    return 0;
}