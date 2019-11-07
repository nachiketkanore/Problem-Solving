#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
#define ll long long int
using namespace std;
ull n;

bool check_permut(ull a[],int n){
    set<ull> per;
    for(int x=0;x<n;x++){
        per.insert(a[x]);
    }
    return per.size()==n;
}

int main(){
    fast;
     cin>>n;
    ll q[n]; q[n-1]=0;
    for(int x=0;x<n-1;x++) cin>>q[x];
    ll p[n];
    ll sum=0,min_val=0;
    for(int x=0;x<n;x++){
        p[x]=sum;
        sum+=q[x];
        if(sum<min_val)
            min_val= sum;
    }
    p[0]=1-min_val;
    for(int x=0;x<n-1;x++){
        p[x+1] = p[x]+q[x];
    }
    bool ok = true;
    for(int x=0;x<n;x++){
        if(p[x]<1 || p[x]>n)
            ok = false;
    }
    if(ok){
        set<ll> pp;
        for(int x=0;x<n;x++){
            pp.insert(p[x]);
        }
        if(pp.size()==n)
            ok = true;
        else
            ok = false;
    //    ok= set<ll>(p.begin(),p.end()).size()==n;
    }
    if(ok)
        for(int x=0;x<n;x++)
        cout<<p[x]<<" ";
    else cout<<"-1\n";







    return 0;
}
