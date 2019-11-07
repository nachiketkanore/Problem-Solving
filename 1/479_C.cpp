// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main(){

	int n;	cin >> n;
	vector<pair<int,int>> a(n);
	for(int x=0;x<n;x++)
		cin >> a[x].first >> a[x].second;

	sort(a.begin() , a.end());

	int ans = -1;

	for(int x=0;x<n;x++){

		if(ans <= a[x].second)
			ans = a[x].second;
		else 
			ans = a[x].first;

	}

	cout << ans << endl;



    return 0;
}