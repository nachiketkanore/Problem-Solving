// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){

	string s;	cin >> s;
	int unit = s[s.size() - 1] - '0';

	for(int x=0;x<s.size();x++){
		int num = (s[x] - '0');
		if(num % 2 == 0){

			if(num < unit){
				swap(s[x] , s[s.size()-1]);
				return cout << s << endl , 0;
			}

		}
	}

	for(int x=s.size() -1;x>=0;x--){

		int num = s[x] - '0';

		if(num % 2 == 0){

			if(num > unit){
				swap(s[x] , s[s.size()-1]);
				return cout << s << endl , 0;
			}

		}

	}

	cout << -1;

    return 0;
}