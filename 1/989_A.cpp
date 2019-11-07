#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    string s; cin>>s;
    if(s.size()<3){cout<<"No\n"; return 0;}
    for(int x=0;x<s.size()-2;x++){
        if((s[x]=='A' || s[x]=='B' || s[x]=='C')
        &&(s[x+1]=='A' || s[x+1]=='B' || s[x+1]=='C')
        &&(s[x+2]=='A' || s[x+2]=='B' || s[x+2]=='C')
        && s[x]!=s[x+1] && s[x]!=s[x+2]  && s[x+1]!=s[x+2] ){
            cout<<"Yes\n";
            return 0;
        }
        // char a=s[x],b=s[x+1],c=s[x+2];
        // if(a!='.' && b!='.' && c!='.'
        // && (a=='A' ||a=='C' ||a=='B')
        // && (b=='A' ||b=='C' ||b=='B')
        // && (c=='A' ||c=='C' ||c=='B' )
        // ){ cout<<"Yes\n"; return 0; }
    }
    cout<<"No\n";
    return 0;
}
