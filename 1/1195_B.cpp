#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
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
    int moves , end ;
        cin >> moves >> end;

        int n = moves , k = end;

        int ans = n;
        int so = (-3 + sqrt(9 + 8*(n+k)))/2;
            ans -= so;
            cout << ans <<endl;


    return 0;
}
