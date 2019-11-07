#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define mp make_pair
#define test int t; cin>>t; while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef pair<int,int> pii;
typedef unordered_map<int,int> mp;

const int mod = 1e9+7;

int solve(int n , int m){

    int ans10[11] = {0};

    for(int x=1;x<=10;x++){
        ans10[x] = ((m % 10)*(x%10)) % 10;

        //cout << ans10[x] << " #"<<  '\n';
    }

    for(int x=1;x<11;x++)
        ans10[x] += ans10[x-1];



    int div_nos = n/m;

    int set_of_10 = div_nos/10;

    int final = set_of_10*ans10[10];

    int remain =  div_nos - set_of_10*10;

    final += ans10[remain];

    return final;

}

int32_t main(){
    FAST;
    test{
        int n,m;    cin >> n >> m;

        cout << solve(n,m) << endl;

    }
    

    return 0;
}
