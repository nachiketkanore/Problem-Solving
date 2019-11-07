#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int n,k; cin>>n>>k;
    int ans=0;
    int time=240 - k;
    for(int x=1;x<=n;x++){
        if(5*x<=time){
            ans++;
            time-=5*x;
        }
    }cout<<ans<<endl;

    return 0;
}
