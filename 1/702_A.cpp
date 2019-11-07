#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
using namespace std;
int main(){
    fast;
    long int n; cin>>n;
    int last {0}; int current {0}; int best {0};
    while(n--){
        long int x; cin>>x;
        if(x>last) current++; else current = 1;
        last = x;
        best = max(best,current);
    }
    cout<<best<<endl;
    return 0;
}
