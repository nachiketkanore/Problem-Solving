#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int n; cin>>n;
    int count=0;
    while(n--){
        int live , capacity;
        cin>>live >>capacity;
        if(capacity-live>=2) count++;

    }
    cout<<count<<endl;


    return 0;
}
