// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main(){

	int n , m;	cin >> n >> m;
	int cnt = min(n,m) + 1;

	cout << cnt << endl;

	int x(0) , y(m);

	while(cnt--)
		cout << x++ << " " << y-- << endl;

	
    return 0;
}