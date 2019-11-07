#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
     int n,k; cin>>n>>k;
    int a[n];
    int count {0};
    for(int x=0;x<n;x++){
        cin>>a[x];
        if(5-a[x]>=k) 
            count++;
    }
    cout<<count/3<<endl;

    return 0;
}
