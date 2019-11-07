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

string solve(string& s){
    int n = s.size();

    int f[26] = {0};
    for(auto x: s) f[x-'a']++;

    char t ;
    for(int x=0;x<26;x++) 
        if(f[x] > 0) t = (char) (x + 'a');

    string ans = "";

    for(int x=0;x<n;x++){
        if(s[x] == t and f[t - 'a'] > 0){
            ans.pb(t);
            f[s[x] - 'a']--;
            continue;
        }

        if(f[t - 'a'] == 0){
            int num = t - 'a';
            while(f[num] == 0 and num > -1) num--;
            t = 'a' + num;

            if(s[x] == t){
                ans.pb(t);
            }

        }

        f[s[x] - 'a']--;
    }
    return ans;

}

int32_t main(){
    FAST;
   string s;    cin >> s;
   cout << solve(s) << endl;

    return 0;
}
