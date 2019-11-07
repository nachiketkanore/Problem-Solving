#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    long int n; cin>>n;
    if(n%5==0){
        cout<<n/5<<endl;
        return 0;
    }else {
        cout<<(n/5) + 1<<endl;
        return 0;
    }


}
