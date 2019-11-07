#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    string p,q;
    cin>>p>>q;
    for(int x=0;x<p.size();x++){
        if((p[x]>=65 && p[x]<=90))
        p[x]+=32;
        if((q[x]>=65 && q[x]<=90))
        q[x]+=32;


    }
    if(p<q) cout<<"-1"<<endl;
    else if(p>q) cout<<"1"<<endl;
    else cout<<"0"<<endl;

    return 0;
}
