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
    test{
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        //sort( a, a + 3);

        int ans = a[0] + a[1] + a[2];
        cout << ans/2 << endl;
    }


    return 0;
}
