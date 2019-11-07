// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){

	int n;	cin >> n;
	int m;	cin >> m;

	int a[m];	for(int x=0;x<m;x++)	cin >> a[x];

	int ans = 0;
	int curr = 1;
	int last = n;

	for(int x=0;x<m;x++){

		int togo = a[x];

		if(togo < curr){
			int last_dist = last - curr;
			last_dist += togo;
			ans += last_dist;
			curr = togo;
		}else{
			ans += (togo - curr);
			curr = togo;
		}

	}

	cout << ans << endl;

    return 0;
}