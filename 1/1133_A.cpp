#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    float a,b,c,d;
    char x;
    cin>>a>>x>>c;
    cin>>b>>x>>d;
    float htom = (a+b)/2;
    float mul= htom - ( (int ) a+ (int ) b)/2;
    int totalmin = (c+d)/2 + mul*60;
    int totalhr  = (( (int) a+ (int) b)/2) mod 24;
    // cout<<htom<<"   "<<mul<<endl;
    if(totalmin>59){ totalmin%=60;
        totalhr++;
}

if(totalhr >9 && totalmin >9) cout<<totalhr<<":"<<totalmin<<endl;
else if(totalhr > 9 && totalmin<10) cout<<totalhr<<":0"<<totalmin<<endl;
else if(totalmin > 9 && totalhr <10) cout<<"0"<<totalhr<<":"<<totalmin<<endl;
else if(totalmin <10 && totalhr <10 ) cout<<"0"<<totalhr<<":0"<<totalmin<<endl;

    return 0;
}
// 22 26
//         21 54
//         22 58
//
// 21.5
