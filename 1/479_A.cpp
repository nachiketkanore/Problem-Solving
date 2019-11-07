#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int a,b,c; cin>>a>>b>>c;
    int ans=a+b+c;
    ans =max(ans,(a+b)*c);
    ans =max(ans,a*b*c);
    ans =max(ans,a*(b+c));
    ans=max(ans,a*b +c);
    ans=max(ans,a+b*c);
    cout<<ans<<endl;

    // if(a==1 && b==1 && c==1){ cout<<a+b+c<<endl; return 0;}
    // if(a==b && a==c  ) {cout<<a*b*c<<endl; return 0;}
    // int max1=a*b*c;
    // int max2=(a+b)*c;
    // int max3=a*(b+c);
    // int max4=a*b + c;
    // int max5= a + b*c;
    // int maxi =max(max1,max(max2,max(max3,max(max4,max5))));
    // cout<<maxi<<endl;

    return 0;
}
