// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main(){

	int n;	cin >> n;
	int a[n];
	int ind = 0 , cnt = 0;
	for(int x=0;x<n;x++){
		cin >> a[x];
		if(x > 0){
			if(a[x] < a[x-1])
				ind = x , cnt++;
		}	

		if(cnt > 1)
			return cout << - 1, 0;
	}

	if(cnt == 0)
		return cout << 0 , 0;

	vector<int> arr(n);
	int i = 0;

	for(int x=ind;x<n;x++){
		arr[i] = a[x];
		i++;
	}

	for(int x=0;x<ind;x++){
		arr[i] = a[x];
		i++;
	}

	vector<int> t = arr;
	sort(t.begin() , t.end());

	if(t == arr)
		cout << (n - ind ) << endl;
	else
		cout << -1;
	


    return 0;
}