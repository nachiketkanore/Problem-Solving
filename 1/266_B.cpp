#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int time,n;
    cin>>n;
    cin>>time;
    string q;
    cin>>q;
    for(int x=1;x<=time;x++){
        for(int y=0;y<q.size()-1;y++)
        if(q[y]=='B'&& q[y+1]=='G')
        {
            q[y]='G';
            q[y+1]='B';
            y++;
        }
    }
    cout<<q << endl;
    return 0;
}
