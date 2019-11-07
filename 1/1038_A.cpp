#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
using namespace std;
int f[26];
int main(){
    fast;
    long int n; int k ; string s;
    cin>>n>>k>>s;
    for(auto &it : s){
        f[it - 'A']++;
    }
    int ans= f[0];
        for(int t=0;t<k;t++)
    {
        ans = min(ans,f[t]);
    } ans*=k;
    cout<<ans<<endl;

    return 0;
}
