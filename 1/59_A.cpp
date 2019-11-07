#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    string s; cin>>s;
    int capitalcount {0},smallcount {0};
    for(int x=0;x<s.size();x++){
        if(s[x]>=65 && s[x]<=90) capitalcount++;
        else smallcount++;
    }
    if(smallcount>= capitalcount) {
        for(int x=0;x<s.size();x++){
            if(s[x]>=65 && s[x]<=90)
                cout<<(char)(s[x]+32);
            else cout<<s[x];
        }
        cout<<endl;
    }
    else {
         for(int x=0;x<s.size();x++){
            if(s[x]>=97 && s[x]<=122)
                cout<<(char)(s[x]-32);
            else cout<<s[x];
        }
        cout<<endl;
        
    }
    return 0;
}
