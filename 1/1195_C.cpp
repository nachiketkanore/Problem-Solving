#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5;
int dp[N][3];
int a[N][3];

signed main(){

    int n;  cin >> n;

    for(int x=1;x<=n;x++)   cin >> a[x][1];
    for(int x=1;x<=n;x++)   cin >> a[x][2];
    
    dp[1][1] = a[1][1];
    dp[1][2] = a[1][2];

    dp[2][1] = max(a[2][1] + a[1][2] , a[2][1]);
    dp[2][2] = max(a[2][2] + a[1][1] , a[2][2]);

    for(int x=3;x<=n;x++){

        dp[x][1] = max(dp[x-1][2] + a[x][1] , 
                       dp[x-2][2] + a[x][1]);

        dp[x][2] = max(dp[x-1][1] + a[x][2] , 
                       dp[x-2][1] + a[x][2]);

    }

    int ans = max(dp[n][1] , dp[n][2]);

    cout << ans;


    return 0;
}