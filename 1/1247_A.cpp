#include<bits/stdc++.h>
#define int long long
using namespace std;

const int inf = 1e18;


int32_t main(){

   int a, b;    cin >> a >> b;
   if(a == 9 and b == 1){
       cout << a << " " << b << "0" << endl;
       return 0;
   }
    if(b > a+1 or a > b)
        cout << -1;
    else{
        if(a == b){
            cout << a << "1 " << b << "2" << endl;
        }
        else
            cout << a << "9" << " " << b << "0" << endl;
    }


    return 0;
}