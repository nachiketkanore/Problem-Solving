#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int x=0;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if((s[0]=='-' && s[1]=='-')||(s[1]=='-' && s[2]=='-'))
        x--;
        else
        x++;


    }
    cout<<x<<endl;

    return 0;
}
