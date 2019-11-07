#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int t; cin>>t;
    while(t--){
        ull des,v,l,r;
        cin>>des>>v>>l>>r;
        ull ans = (des)/v -(r)/v +(l-1)/v;
    cout<<ans<<endl;
    }

    return 0;
}
// 4
// 10 2 3 7
// 100 51 51 51
// 1234 1 100 199
// 1000000000 1 1 1000000000
