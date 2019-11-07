#include<bits/stdc++.h>
#define int long long
#define test int t;cin >> t;while(t--)
using namespace std;

typedef pair<int,int> pii;

const int N = 5e5+21;
pii arr[N];
multiset<int> l,r;

signed main(){

    int n;  cin >> n;
    for(int x=0;x<n;x++){
        cin >> arr[x].first >> arr[x].second;
        l.insert(arr[x].first);
        r.insert(arr[x].second);
    }

    int ans = 0;

    for(int x=0;x<n;x++){
        l.erase(l.find(arr[x].first));
        r.erase(r.find(arr[x].second));
        int len = *r.begin() - *l.rbegin();
        ans = max(ans , len);
        l.insert(arr[x].first);
        r.insert(arr[x].second);
    }
    cout << ans;
    
   
    return 0;
}