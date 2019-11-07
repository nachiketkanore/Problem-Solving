#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include<bits/stdc++.h>
#define int long long
#define test int t;cin >> t;while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

typedef pair<int,int> pii;

vector<int> divs;

void find_divs(int n){

    for(int x=1;x*x <= n;x++){
        if(n % x == 0){
            divs.push_back(x);
            if(n/x != x){
                divs.push_back(n/x);
            }
        }
    }


}

signed main(){
    FAST;
    int n;  cin >> n;
    int g = 0;

    for(int x=0;x<n;x++){
        int t;  cin>> t;
        g = __gcd(g , t);
    }

    find_divs(g);

    cout << divs.size() << '\n';
   
    return 0;
}