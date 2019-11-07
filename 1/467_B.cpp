// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){

	int n , m , k;	cin >> n >> m >> k;

	int a[m+1];
	for(int x=0;x<m+1;x++)	cin >> a[x];

	int ans = 0;

	for(int x=0;x<m;x++)
		ans += (__builtin_popcount(a[x] ^ a[m]) <= k);
	
	cout << ans << endl;

    return 0;
}