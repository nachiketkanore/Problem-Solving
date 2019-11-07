#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;

        int64_t n, k; cin >> n >> k;
        cout << ((k <= (n+1)/2) ? (2*k - 1) : (2 * (k - (n + 1)/2) ) ) << endl;
        

    return 0;
}
