#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int n; cin>>n;

    long int aa = 0; long int bb=0,cc=0;
    for(int x=0;x<n;x++){
        long int t;
        cin>>t;
        aa+=t;
    }

    for(int x=0;x<n-1;x++){
        long int t;
        cin>>t;
        bb+=t;
    }
    for(int x=0;x<n-2;x++){
        long int t;
        cin>>t;
        cc+=t;
    }
    cout<<aa-bb<<"\n"<<bb-cc<<endl;
    return 0;
}
