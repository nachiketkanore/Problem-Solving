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

pair<int,char> solve(string &s){
    int f[26] = {0} , ans = 0;
    for(auto x: s)
        f[x-'a']++;

    char anschar ;
    
    for(int x=25;x>=0;x--){
        if(f[x] > 0){
            anschar = (char)(x+ 'a');
            ans = f[x];
            break;
        }
    }
    
    return {ans, anschar};

}

int32_t main(){
    FAST;
     string s;  cin>>s;
     pair<int,char> ss = solve(s);
     int f = ss.first;
     char ans = ss.second;
     while(f--) cout << ans;
     cout << endl;

    return 0;
}
