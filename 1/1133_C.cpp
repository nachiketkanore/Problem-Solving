#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull long long int
using namespace std;
int main(){
    fast;
    int n; cin>>n;
    vector <int> v (n);
    for(int x=0;x<n;x++) cin>>v[x];

    sort(v.begin(),v.end());
    int ans =0; int y=0;
    for(int x=0;x<n;x++){
        while(y<n && v[y]-v[x]<=5) {
            y++;
            ans = max(ans,y-x);
        }
    }
    cout<<ans<<endl;
    return 0;
}
//6
//1 2 10 12 15 17
