#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int n,m;
    cin>>n>>m;
    map <string , string > hash;
    for(int x=0;x<m;x++)
    {
        string a,b; cin>>a>>b;
        if(a.size()<=b.size()){
            b = a;
        }
        hash.insert(pair<string , string > (a,b));
    }
    for(int x=0;x<n;x++){
        string s;   cin>>s;
        cout<<hash[s]<<" ";

    }
    cout<<endl;

    return 0;
}
