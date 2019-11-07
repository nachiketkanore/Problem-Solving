// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){

	int n , m;	cin >> n >> m;
	int rem = m - 1;
	int big = n - rem;
	int mx = (big*(big-1))/2;

	int parts = n / m;

	int mn = m * (parts *(parts - 1)) / 2;
	mn += parts * (n % m);

	
	cout << mn << " " << mx << endl;


    return 0;
}