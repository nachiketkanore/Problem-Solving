#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int n; cin>>n;
    long int a[n]; for(long int x=0;x<n;x++) cin>>a[x];
    long currentmax {1};
    long ans {1};
    for(int x=1;x<n;x++){
        if(a[x]>=a[x-1]) currentmax++;
        else currentmax ={1};
        if(currentmax > ans) ans = currentmax;
    }
    cout<<ans<<endl;
    return 0;
}
