#include <bits/stdc++.h>
#define pb push_back
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

int main(){

   string s;    cin >> s;
   cout << solve(s) << endl;

    return 0;
}