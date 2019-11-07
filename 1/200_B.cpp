#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    double n; cin>>n;
    double total=0;
    double fractionn;
    for(int x=0;x<n;x++){
         cin>>fractionn;
        total+=fractionn;

    }
    double ans = total /n;
    cout<<fixed<<std::setprecision(12)<<ans<<endl;

    return 0;
}
