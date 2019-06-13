#include<bits/stdc++.h>
#define int long long 
#define endl "\n"
using namespace std;
 
int32_t main(){
	int a , b , c;
  	cin>>a>>b>>c;
  	int ans = min({a+b,a+c,b+c});
  	cout<<ans<<endl;
 
	return 0;
}
