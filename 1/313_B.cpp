#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N = 2e5;
const int inf = 1e18;

int a[N];

signed main(){
    
   string s;    cin >> s;
   int n = s.size();

   for(int x=0;x<n-1;x++){
       if(s[x] == s[x+1])
            a[x+1] = 1;
   }


   for(int x=1;x<=n;x++){
       a[x] += a[x-1];
   }

//    for(int x=1;x<=n;x++)
//     cout << a[x];

    int q;  cin >> q;
    while(q--){
        int l,r;   cin >> l >> r;
        r--;
        cout << (a[r] - a[l-1]) << endl;
    }


    return 0;
}