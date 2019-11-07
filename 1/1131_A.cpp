#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
using namespace std;
int main(){
    fast;
    long long int w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    if(w1==w2) {
        cout<< 2*(h1+h2) +4 + 2*w1 <<endl;
        return 0;
    }
    else{
        cout<<4+ 2*(h1+h2+w1)<<endl;
        return 0;
    }
    return 0;
}
