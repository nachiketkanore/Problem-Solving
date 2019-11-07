#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int x=arr[0];
    for(int i=1;i<n;i++){
        x=__gcd(x,arr[i]);
    }
    while (x%2==0) x/=2;
    while (x%3==0) x/=3;

    for(int i=0;i<n;i++){
        int twopow=1,threepow=1;
        while(arr[i]%(twopow*2)==0) twopow*=2;
        while(arr[i]%(threepow*3)==0) threepow*=3;
        if(x*twopow*threepow != arr[i]) {
            cout<<"No\n";
            return 0;
        }
    }

    cout<<"Yes\n";
    return 0;
}
