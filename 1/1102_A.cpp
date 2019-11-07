#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	n%=4;

	if(n==0 || n==3)
		cout<<"0\n";
	else
		cout<<"1\n";
	return 0;
}