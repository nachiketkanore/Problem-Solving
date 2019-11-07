#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int mat[5][5];
    int r,c;
    for(int x=0;x<5;x++){
        for(int y=0;y<5;y++){
            cin>>mat[x][y];
            if(mat[x][y]==1)
            {r=x;c=y;
            break;}

        }
    }
    //r is the row index of 1 and c is the column index of 1
    // if(r==2 && c==2){
    //     cout<<"0"<<endl;
    //     return 0;
    // }


    cout<<abs(2-r)+abs(2-c)<<endl;



}
