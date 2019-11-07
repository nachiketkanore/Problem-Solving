#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define iseven %2==0
#define isodd  %2==1
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int n; int k; cin>>n>>k;
    int ans = 0; int d[k] ={0};    int a[n];

     for(int x=0;x<n;x++){
        cin>>a[x]; a[x]= a[x] mod k;
    }
    for(int x=0;x<n;x++) d[a[x]]++;

    ans= d[0]/2;

    if (k % 2 ==1){
        for(int x=1;x<=k/2;x++)
        ans+= min(d[x],d[k-x]);
    }
    else{
        for(int x=1;x<k/2;x++)
        ans+= min(d[x],d[k-x]);

        ans+=d[k/2]/2;
    }

    cout<<ans*2<<endl;
    return 0;
}
