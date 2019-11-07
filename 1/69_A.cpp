#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    for(int t=0;t<n;t++){
        int a,b,c;
        cin>>a>>b>>c;
        x+=a;y+=b;z+=c;
    }
    if(x==0 && y==0 && z==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}
