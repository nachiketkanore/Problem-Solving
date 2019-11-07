#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
using namespace std;
int main(){
    fast;
    string s; cin>>s;
    set <string> ans;
    ans.insert(s);
    for(int x=0;x<s.size();x++){
        s= s[s.size()-1] + s.substr(0,s.size()-1);
        ans.insert(s);
    }
    cout<<ans.size()<<endl;
    return 0;
}
