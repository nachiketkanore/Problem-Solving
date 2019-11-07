#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int n;
    cin>>n;
    int count=0;
    for(int x=0;x<n;x++){
        bool a,b,c;
        cin>>a>>b>>c;
        if(a&&b || b&&c || a&&c || a&&b&&c)
        count++;
    }
    cout<<count<<endl;
    return 0;
}
