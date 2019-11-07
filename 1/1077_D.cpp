#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define test int t; cin>>t; while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

const int MAX = 200 * 1000 + 1;
int n , k;
vector<int> s , t;
vector<int> cnts(MAX);

bool can(int cnt){
    t.clear();


    for(int x=0;x<MAX;x++){
        int want = min(cnts[x]/cnt , k - t.size());
        for(int y = 0 ; y < want ;y++)
            t.pb(x);
    }
    // cout << "Count is " << cnt  << ". Inside can func : ";
    // for(auto x : t) cout << x << " ";   cout << endl;

    return (t.size() == k);
}

int32_t main(){
    FAST;
    cin>> n >>k;
    s = vector<int> (n);
    for(int x=0;x<n;x++) cin >>s[x] , cnts[s[x]]++;
 
    int left = 0 , right = n;

    while(right - left > 1){
        int mid = (left + right) >> 1;
            //cout << " left = " << left << " right = " << right << endl;
        if(can(mid)) left = mid ;
        else right = mid;
    }

    if(!can(right)) can(left);

    for(auto x : t) cout << x << " ";   cout << endl;

    
    return 0;
}
