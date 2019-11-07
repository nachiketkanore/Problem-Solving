#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
using namespace std;
int main(){
    fast;
    string a,temp,b;
    long int acount=0,bcount=0;
    long int n; cin>>n;
    for(long int x=0;x<n;x++){
        if(x==0)
        {cin>>a; acount++;
    }else {
        cin>>temp;
        if(temp==a) {acount++;}
        else {b= temp; bcount++;}
    }
    }
    if(acount>bcount) {cout<<a<<endl;}
    else if(bcount>acount) cout<<b<<endl;
    return 0;
}
