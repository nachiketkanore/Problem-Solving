#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int y; cin>>y;
    int a,b,c;

    for(long int t=y+1;;t++){
        int x=t;
        a=x%10; x/=10;
        b=x%10; x/=10;
        c=x%10; x/=10;
        if(a!=b && a!=c && a!=x && b!=c && b!=x && c!=x){
            cout<<t<<endl;
            return 0;
        }
    }

    return 0;
}
