#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using namespace std;
int main(){
    fastio tie
     long int x,y,z;
     cin>>x>>y>>z;
     long int a,b,c;
     cin>>a>>b>>c;
     bool andrew=0,d=0,m=0;
     if(a>=x){
         andrew=1;
         a-=x;
     }
     b+=a;
     if(b>=y){
         d=1;
         b-=y;

     }
     c+=b;
     if(c >= z){
         m=1;
         c-=z;

     }
     if(andrew && d && m && a>=0 && b>=0 && c>=0)
     cout<<"YES\n";
     else
     cout<<"NO\n";
    return 0;
}
