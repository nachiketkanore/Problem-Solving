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

int WTT(int *f , int num , int n){
    if(f[num] and num == 1) return 0;

    if(!f[num]){
        f[num] = 1;
        return num;
    }

    while(f[num] and num >= 0){
        num--;
    }
    if(num < 0) return 0;
    f[num] = 1;
    return num;

}

int solve(vector<int> &a , int n){
    sort(rall(a));
    int mx = a[0];
    int f[mx+1] = {0};
    int ans = 0;
    for(auto &x : a){
        ans += WTT(f,x,mx+1);
    }
    return ans;
}

int32_t main(){
    FAST;
    test{
        int n;  cin>>n;
        vector<int> a(n+1,0);
        for(int x=0;x<n;x++){
            int c;  cin>>c;
            a[c]++;
        }
        cout << solve(a,n) << endl;
    }


    return 0;
}
