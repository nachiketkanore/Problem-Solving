#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int n; cin>>n; //number of chapters in the book
    vector<int> a (2*n);
    for(int x=0;x<2*n;x++) cin>>a[x];
    int k ; cin>>k;
    int count {0};
    int x; int flag=1;
    for(int x=0;x<2*n-1;x+=2){
        if(a[x]<=k && a[x+1]>=k) {
            count++;
            flag++;
            break;
        }
        else flag++;
    }
    cout<<count+n-flag +1<<endl;

    return 0;
}
