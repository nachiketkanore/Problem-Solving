#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int q; cin>>q;
    while(q--){
        long long int n,a,b;
        cin>>n>>a>>b;
        2*a>b ? cout<<(n/2)*b + (n%2)*a : cout<<n*a;
         cout<<endl;
     }


    return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int q,a,b;
	long long int n;
	cin>>q;
	while(q--)
	{
	    cin>>n>>a>>b;
	    b<2*a? cout<<(n/2)*b+(n%2)*a: cout<<n*a;
	    cout<<endl;
	}
	return 0;
}

*/
