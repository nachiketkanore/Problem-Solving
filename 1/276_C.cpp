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

int answer(vi&f ,vi&a){
    int n = a.size();

    int ans = 0;

    for(int x=0;x<n;x++){
        ans += f[x]*a[x];
    }
    return ans;
}

int32_t main(){
    FAST;
    int n , k;  cin >> n >> k;
    vi a(n) ;   for(int x=0;x<n;x++)    cin >> a[x];
    vi f(n,0);

    while(k--){
        int l , r;  cin >> l >>r;   l-- , r--;
        f[l]++ ;
        if(r < n -1) f[r+1]--;
    }    

    for(int x =1 ;x < n;x++){
        f[x] += f[x-1];
    }

    sort(rall(f));
    sort(rall(a));

    cout << answer(f,a) << endl;


    return 0;
}
