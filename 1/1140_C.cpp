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

const int N= 300009;
pair <int,int> a[N];


int main(){
    fast;
    int n,k;
    cin>>n>>k; //first is beauty
               //second is length
        for(int x=0;x<n;x++){
            cin>>a[x].second>>a[x].first;
        }
    sort(a,a+n);
    ull res=0,sum=0;
    set<pair<int,int>> s;
    for(int x=n-1;x>=0;x--){
        s.insert(make_pair(a[x].second,x));
        sum+=a[x].second;
        while(s.size()>k){
            auto it = s.begin();
            sum-=it->first;
            s.erase(it);
        }
        res = max(res, sum * a[x].first);
    }
    cout<<res<<endl;





    return 0;
}
