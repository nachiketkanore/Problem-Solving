#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int i=1,j=2,k=3;
    int x,y,z; cin>>x>>y>>z;
    while(i<x && j<y && k<z) {
        i++;j++;k++;
    }
    cout<<i+j+k<<endl;

    return 0;
}
