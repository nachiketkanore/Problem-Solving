#include<bits/stdc++.h>
using namespace std;
bool is_magical(string n){
    for(int x=0;x<n.size();x++){
        if(n[x]!='1' && n[x]!='4') return false;

    }
    if(n[0]=='4') return false;
    if(n.find("444")!=n.npos)
        return false;
    return true;
}
int main(){
    string number;
    cin>>number;
    if(is_magical(number) ) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
