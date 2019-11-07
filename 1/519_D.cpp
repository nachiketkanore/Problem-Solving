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


int solve(int *val , string &s){
    int ans = 0 , n = s.size();
        int pref = 0;
        unordered_map<int,int> m[26];

    for(int x=0;x<n;x++){
         ans += m[s[x] - 'a'][pref];
        pref += val[s[x] - 'a'];
        m[s[x] - 'a'][pref]++;
    }

    return ans;
}

int32_t main(){
    FAST;
    int val[26] = {0};  for(int x=0;x<26;x++)   cin >> val[x];
    string s;   cin >> s;

    cout << solve(val,s) << endl;

    return 0;
}
