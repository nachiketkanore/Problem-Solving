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
    bool a[n];
    int l=0,r=0;
    for(int x=0;x<n;x++){ cin>>a[x];
    if(a[x]==0) l++;
    else r++;
}
    // int t=min(l,r);
    // l=0;r=0;

for(int x=0;x<n;x++){
    if(a[x]==0) l--;
    else r--;
    if(l==0 || r==0)
        {
            cout<<x+1<<endl;
            return 0;
        }
}


    return 0;
}
