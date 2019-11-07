// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){

	string s;	cin >> s;
	int n = s.size();

	int k;	cin >> k;
	int mx = 0;
	int ans = 0;
	int val[26] = {0};

	for(int x=0;x<26;x++){
		cin >> val[x];
		mx = max(mx , val[x]);
	}

	for(int x=0;x<n;x++)
		ans += (x + 1) * val[s[x] - 'a'];
	
	for(int x=n+1;x<=n+k;x++)
		ans += (x * mx);

		cout << ans << endl;


    return 0;
}