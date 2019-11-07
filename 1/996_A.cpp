#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
using namespace std;
int main(){
    fast;
    long int n; cin>>n;
    //1:5:10:20:100//
    long int ans {0};
    if(n>=100){
        ans=n/100;
        n%=100;
    }
    if(n>=20){
        ans+=n/20;
        n%=20;
    }
    if(n>=10){
        ans+=n/10;
        n%=10;
    }
    if(n>=5){
        ans+=n/5;
        n%=5;
    }
    ans+=n;
    cout<<ans<<endl;

    return 0;
}
