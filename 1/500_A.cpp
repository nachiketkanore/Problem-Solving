#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,t;
    cin>>n>>t;

    map<int,int> move;

    for(int x=1;x<n;x++){

        int a;
        cin>>a;
        move.insert(pair<int,int> (x,x+a));

    }

    set<int> visited;
    int current = 1;
    bool possible(0);

    while(true){

        if(current == t ){
            possible  = 1;
            break;
        }
        else if(current == n or visited.count(current))
            break;
        else {
            visited.insert(current );
            current = move[current];
        }

    }


    if(possible)
        cout<<"YES\n";
    else
    {
            cout<<"NO\n";
    }
    




    return 0;
}