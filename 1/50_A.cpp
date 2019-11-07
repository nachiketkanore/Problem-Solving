#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
using namespace std;
int main(){
    fast;
        int m,n;
        cin>>m>>n;
        if(n mod 2 == 0)cout<<(n/2)*m<<endl;
        else cout<<(n/2)*m + m/2<<endl;


    return 0;
}
