#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
using namespace std;
int main(){
    fast;
        int n; cin>>n;
        string s; cin>>s;
        //string t="xxx";
        int count=0;
        for(int x=0;x<s.size();x++){
            if(s[x]=='x' && s[x+1]=='x'&& s[x+2]=='x')
            count++;
        }
        cout<<count<<endl;


    return 0;
}
