#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using namespace std;
int main(){
    fastio tie
    int n,k;
    cin>>n>>k;
    int arr[n];
        for(int x=0;x<n;x++) cin>>arr[x];
int count=0;
        for(int x=0;x<n;x++){
            if(arr[x]>=arr[k-1] && arr[x]>0)
            count++;

        }
        cout<<count;

    return 0;
}
