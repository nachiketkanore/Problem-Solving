#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
using namespace std;
int main(){
    fast;
    long int n; cin>>n;
    int p[n];
    int sum1=0;
    for(int x=0;x<n;x++) {cin>>p[x]; sum1+=p[x];}
    sort(p,p+n);
    int mn= p[0];

    int res = sum1;

        for(int t=0;t<n;t++){
                for(int x=1;x<=p[t];x++){
                    if(p[t]%x!=0) continue;
                    int cur = sum1 -mn -p[t];
                    cur+=mn*x + p[t]/x;
                    res = min(res, cur);

            }
        }
        cout<<res<<endl;
    return 0;
}
