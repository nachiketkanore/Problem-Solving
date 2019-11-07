// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main(){

	int n;	cin >> n;
	vector<int> one , two;

	int prev = 0;

	for(int x=1;x<=n;x++){
		int t;	cin >> t;
		one.push_back(t - prev);
		prev = t;
	}

	prev = 0;

	

	for(int x=1;x<=n;x++){
		int t;	cin >> t;
		two.push_back(t - prev);
		prev = t;
	}

	if(one[0] != two[0])
		return cout << "No" << endl , 0;

	sort(one.begin() , one.end());
	sort(two.begin() , two.end());

	cout << (one == two ? "Yes" : "No") << endl;
	
    return 0;
}