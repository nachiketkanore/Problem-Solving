#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N = 2e5;
const int inf = 1e18;

int blocked[N] = {inf};

signed main(){
    
   int n;   cin >> n;
   int m;   cin >> m;
    for(int x=1;x<=m;x++){    
        cin >> blocked[x];
        if(blocked[x] == n or blocked[x] == 1){
            cout << "NO";
            return 0;
        }
    }

    sort(blocked+1, blocked+m+1);

    for(int x=1;x<=m;x++){
        int fi = blocked[x], se = blocked[x+1] , th = blocked[x+2];

        if(x <= m){
            if(fi == n or se == n or th == n){
                cout << "NO";
                return 0;
            }
        }

        if(se - fi == 1 and th - se == 1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}