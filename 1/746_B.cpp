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
    string t=s;
    int ind {n-1};
    for(int x=n-1;x>=0;x-=2) t[ind--]=s[x];
    ind=0;
    for(int x=n-2;x>=0;x-=2) t[ind++]=s[x];
    cout<<t<<endl;





    return 0;
}
