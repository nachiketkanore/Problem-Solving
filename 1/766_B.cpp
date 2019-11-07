#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    ull n; cin>>n;
    ull a[n];
    for(int x=0;x<n;x++) cin>>a[x];
    sort(a,a+n);
    for(int x=2;x<n;x++){
        if(a[x-2]+a[x-1]> a[x]){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
   
    return 0;
}
