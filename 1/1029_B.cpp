#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;

//functions go here


int main(){
    fast;
    int n; cin>>n;
    int a[n]; for(int x=0;x<n;x++) cin>>a[x];
    int l=a[0],r;
    int count =0;int ans=0;
    for(int x=0;x<n-1;x++){
        if(a[x+1] - a[x]>0 and a[x+1]<=2*a[x]){
            count ++;
            ans= max(ans,count);
        }
        else {
            l=a[x+1];
            count = 0;
        }
    }

    cout<<ans+1<<endl;

    return 0;
}
