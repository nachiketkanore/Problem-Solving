#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int a,b; cin>>a>>b;
    int len { abs(a-b)};
    int counta { len/2};
    int countb {len - len/2};
    cout<<counta*(counta+1)/2 + countb*(countb+1)/2<<endl;

    return 0;
}
