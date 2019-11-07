#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    string s;
    cin>>s;

    if(s[0]>=65 && s[0]<=90){
        cout<<s<<endl;
        return 0;
    }
    else{
        s[0]-=32;
        cout<<s<<endl;
        return 0;
    }
}
