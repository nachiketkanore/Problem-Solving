#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int n; cin>>n;
    int a[n];int res[10000];
    for(int x=0;x<n;x++) {cin>>a[x];res[a[x]]=x+1;}
    for(int x=1;x<=n;x++) cout<<res[x]<<" ";
    cout<<endl;
    return 0;
}
