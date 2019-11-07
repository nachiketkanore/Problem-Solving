#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    string s;
    cin>>s;
    for(int x=0;x<s.size();x++){
        if(s[x]=='H' || s[x] == 'Q' || s[x]=='9' ){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";

    return 0;
}
