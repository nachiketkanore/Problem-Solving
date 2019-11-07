#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N = 2e5;
const int inf = 1e18;

int changed[N];
int a[N];

signed main(){
    
    int n;  int m;
    cin >> n >> m;

    for(int x=1;x<=n;x++)   cin >> a[x];

    int added = 0;
    
    while(m--){
        int t;  cin >> t;
        if(t == 1){
            int ind , val;  cin >> ind >> val;
            a[ind] = val - added;
        }else if(t == 2){   
            int tt; cin >> tt;
            added += tt;
        }else{
            int ind;    cin >> ind;
            cout << (a[ind] + added) << '\n';
        }
    }




    return 0;
}