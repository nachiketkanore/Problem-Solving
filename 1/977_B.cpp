#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int n; cin>>n;
    string s ; cin>>s;
    int count=1;
    int ans=1;
    string t;
    //11
//GGRRAATTZZZ

    for(int x=0;x<s.size();x++){
        char a=s[x],b=s[x+1];
        for(int y=0;y<s.size();y++){
            if(s[y]==a and s[y+1]==b) {count++;  }

        }
        if(ans < count) {ans = count; t[0]=a;t[1]=b;}

        count = 1;

    }
    //cout<<ans-1<<endl;
    cout<<t[0]<<t[1]<<endl;

    return 0;
}
