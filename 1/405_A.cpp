#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n]; for(int x=0;x<n;x++) cin>>a[x];
    sort(a,a+n);
    for(auto at:a) cout<<at<<" ";
    cout<<endl;
    return 0;
}
