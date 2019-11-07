/* "Hardwork beats talent when talent doesn't work hard"
--------------------------------------------------------
It's been a long day without you, my friend
And I'll tell you all about it when I see you again
We've come a long way from where we began
Oh I'll tell you all about it when I see you again
When I see you again I'll see you again
*/

#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;

// long long primefactors(ull m){
//     int a=0;int b=0;
//     for(int x=2;x*x<=m;x++){
//         while(m%x==0 && x==2){
//             m/=x;
//             a++;
//         }
//         while(m%x==0 && x==3){
//             m/=x;
//             b++;
//         }
//         if(x!=2 && x!=3) return -1;
//     }
//     int t=a+b;
//     return t;
//
// }

int main(){
    fast;
    double n,m; cin>>n>>m;
    if(n>=m) {cout<<"0\n"; return 0;}
    else {
        double t= m/n;
        int hell = m/n;
        if(hell !=t){ cout<<"-1\n"; return 0;}
        int a =0,b=0;
        while(hell%2==0){
            hell/=2;
            a++;
        }while(hell%3==0){
            hell/=3;
            b++;
        }
        if(hell == 1) cout<<a+b<<endl;
        else cout<<"-1\n";





    }

    return 0;
}
