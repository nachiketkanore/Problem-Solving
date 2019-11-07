#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e7+21;
const int mod = 1e9+7;
int dp[N];

int32_t main(){
    int n;  cin >> n;

    dp[0] = 1, dp[1] = 0, dp[2] = 3, dp[3] = 6;

    for(int x=4;x<=n;x++){
        dp[x] = ((3*dp[x-2])%mod + (2*dp[x-1])%mod)%mod;
    }

    cout << dp[n];

    return 0;
}