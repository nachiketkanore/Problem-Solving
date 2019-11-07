#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long  int a[n];
    for(long int x=0;x<n;x++) cin>>a[x];
    sort(a,a+n);
    vector <int> ans;
    vector <bool> comp (n,false);
    for(int x=n-1;x>=0;x-=2){
        ans.push_back(a[x]);
        comp[x]=true;
    }
    for(int x=0;x<n;x++){
        if(comp[x]==false) ans.push_back(a[x]);
    }
    for(auto it: ans)
        cout<<it<<' ';
        cout<<endl;
return 0;
}
