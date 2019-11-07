#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;

int main(){
    fast;
    string s ; cin>>s;
    vector <int> t;
    for(int x=0;x<s.size();x+=2){
        t.push_back((int)(s[x]-'0'));
    }
    sort(t.begin(),t.end());
    for(int x=0;x<t.size();x++){
        cout<<t[x];
        if(x!=t.size()-1) cout<<'+';
    }
    cout<<"\n";

    return 0;
}
