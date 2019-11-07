#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define umapii unordered_map<int,int>
#define test int t; cin>>t; while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;



int32_t main(){
    FAST;
   int n , k;   cin >> n >> k;
   vi a(n);
   for(int x=0;x<n;x++) cin>> a[x];

   if(n == k){
       cout << 0 << endl;
       exit(0);
   }

   int ans = a[n-1] - a[0];

   vi t;
   
   for(int x=0;x<n-1;x++)
       t.push_back( a[x] - a[x+1] );
   
    //cout << (t.size() == (n-1)) << endl;

    sort(all(t));

    

    for(int x=0;x<k-1;x++){
        ans += t[x];
    }

    cout << ans << endl;

    return 0;
}
