#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
using namespace std;
int main(){
    fast;
    long long int n,a=0; cin>>n;
    if(n%2==0) cout<<n/2<<endl;
    else cout<<(-1-n)/2<<endl;

    return 0;
}
