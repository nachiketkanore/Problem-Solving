#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
using namespace std;
int main(){
    fast;
    int n; cin>>n;
    int x {0},y {0}, a {0},b{0},ans {0};
    for(int t=0;t<n;t++){{
        cin>>a>>b;
        ans+=max(0,min(a,b)-max (x,y)+1);
        x=a;y=b;
        if(x==y) x++,y++;

    }}

        cout<<ans<<endl;
    return 0;
}
