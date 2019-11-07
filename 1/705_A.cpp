#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int n; cin>>n;
    for(int x=0;x<=n-1;x++){
        if(x%2==0) cout<<"I hate ";
        else cout<<"I love ";
        if(x==n-1) cout<<"it";
        else cout<< "that ";
    }
    return 0;
}
