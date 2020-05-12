#include <bits/stdc++.h>
#define int long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 2000;

int dp[N][N][2];
int n, mn = 50;

int go(int id, int len, int prev){
   if(id > n){
      if(prev == 1)
         return len >= mn;
      return 1;
   }
   int &ways = dp[id][len][prev];
   if(~ways)
      return ways;
   ways = 0;
   if(prev == 0){
      ways = ways + go(id + 1, 0, 0);
      ways = ways + go(id + 1, 1, 1);
   }
   else{
      if(len >= mn){
         ways = ways + go(id + 1, 0, 0);
         ways = ways + go(id + 1, len + 1, 1);
      }
      else {
         ways = ways + go(id + 1, len + 1, 1);
      }
   }
   return ways;
}

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);  

   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif

   for(int i = 50; i < 500; i++){
      memset(dp, -1, sizeof(dp));
      n = i;
      int ans = go(2, 1, 1) + go(2, 0, 0);
      cout << " i = " << i << " , ways = " << ans << '\n';
      if(ans > 1e6)
         break;
   }

   
}
