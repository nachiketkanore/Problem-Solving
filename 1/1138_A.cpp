/* "Hardwork beats talent when talent doesn't work hard"
--------------------------------------------------------
It's been a long day without you, my friend
And I'll tell you all about it when I see you again
We've come a long way from where we began
Oh I'll tell you all about it when I see you again
When I see you again I'll see you again
*/

#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int n; cin>>n;
    int a[n];
    for(int x=0;x<n;x++) cin>>a[x];
    int pre=0,curr=1,ans=0;
    for(int x=1;x<n;x++){
        if(a[x]==a[x-1]){
            curr++;
        }else{
            pre=curr;
            curr=1;
        }
        ans=max(ans,min(pre,curr));
    }
    cout<<2*ans<<endl;
    return 0;
}
