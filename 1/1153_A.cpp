/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,t;
    cin>>n>>t;
    ll ans, mn = 1000000000000;
    
    for(ll x= 0;x<n;x++){
        ll a,b; 
        cin>>a>>b;
        while(a < t){
            a += b;
        }
        if(a < mn){
            mn = a;
            ans = x+1;
        }
        
        
    }
    cout<<ans<<endl;
    return 0;
}
