#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
using namespace std;
int main(){
    fast;
        int n,v; cin>>n>>v;
        int ans=0;
        // 1-2-3-4-5-6-n
        //     ^
      if(v>=(n-1)){cout<<n-1<<endl; return 0;}
      ans = v;
      for(int x=2;x<=n-v;x++)
      ans += x;
      cout<<ans<<endl;
    return 0;
}
