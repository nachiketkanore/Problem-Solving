#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int ans = 0;

    while(n < m){

        if(!(m&1)){
            m/=2;
            ans++;
        }
        else{
            m++;
            ans++;
        }

    }

    cout<<ans + n -m <<endl;

    return 0;
}