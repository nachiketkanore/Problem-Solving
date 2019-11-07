/* "Hardwork beats talent when talent doesn't work hard"
--------------------------------------------------------
It's been a long day without you, my friend
And I'll tell you all about it when I see you again
We've come a long way from where we began
Oh I'll tell you all about it when I see you again
When I see you again I'll see you again
*/

#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int n; cin>>n; int a[n];
    int lar=-32000;
    for(int x=0;x<n;x++){ cin>>a[x]; lar=max(lar,a[x]);}
    int ans=0;
    for(int x=0;x<n;x++){
        int t=0;
        while(a[x]==lar && x<n){
            t++;x++;
        }
        ans=max(t,ans);

    }
    cout<<ans<<endl;

    return 0;
}
