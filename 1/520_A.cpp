#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
using namespace std;
int f[26]; //alphabet counter into capitals
int main(){
    fast;
    int n ; cin>>n;
    string s; cin>>s;
    if(n<26){
        cout<<"NO\n";
        return 0;
    }else
    {
        
        for(int x=0;x<s.size();x++){
            if((s[x]>=65 && s[x]<=90)){
                f[s[x]-'A']++;

            }
            else if(s[x]>=97 && s[x]<=122){
                f[s[x]-32-'A']++;
            }
        }
        bool ans=false;
        for(int m=0;m<26;m++){
            if(f[m]>0) ans = true;
            else {ans = false; cout<<"NO\n"; return 0;}
        }
        if(ans) cout<<"YES\n";
}

    return 0;
}
