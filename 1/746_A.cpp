#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
using namespace std;
int main(){
    fast;
        int a,b,c;
        cin>>a>>b>>c;
        int ans = min(a,min(b/2,c/4));
        cout<<ans*7<<endl;
    return 0;
}
