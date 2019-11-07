#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int n;
    cin>>n;
    string s;
    int count=0;
    cin>>s;//red is 'R' //green is 'G'//blue is 'R'
    for(int x=0;x<s.size()-1;x++){
        if(s[x]==s[x+1])
        count++;
    }
    cout<<count<<endl;

    return 0;
}
