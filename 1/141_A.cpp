#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
using namespace std;
int main(){
    fast;
        string s,k; cin>>s>>k;
        s+=k;
        cin>>k;
        //two strings I have are s and k and they are to be compared
        if(s.size()!=k.size()) cout<<"NO\n";
        else{
        vector <char> a,b;
        for(int x=0;x<s.size();x++) a.push_back(s[x]);
        for(int x=0;x<k.size();x++) b.push_back(k[x]);
        sort(a.begin(),a.end()); sort(b.begin(),b.end());
        bool flag =false;
        for(int x=0;x<a.size();x++){
            if(a[x]==b[x]) flag = true;
            else {flag = false; break;}
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
        }

    return 0;
}
