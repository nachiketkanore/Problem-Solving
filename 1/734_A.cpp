#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    long int n; cin>>n;
    string s; cin>>s;
    int anton=0,danik=0;
    for(int x=0;x<s.size();x++){
        if(s[x]=='A') anton++;
        if(s[x]=='D') danik++;
    }
    if(anton == danik) cout<<"Friendship\n";
    else if(anton > danik) cout<<"Anton\n";
    else cout<< "Danik\n";

    return 0;
}
