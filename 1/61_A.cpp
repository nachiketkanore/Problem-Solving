#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;

int main(){
    fastio tie
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for(int x=0;x<a.size();x++){
        cout<<((a[x]-'0')^(b[x]-'0'));
    }cout<<endl;
    return 0;
}
