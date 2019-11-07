/*
    Give me some sunshine , give me some rain , give me another chance 
                       I wanna grow up once again .
*/

#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>

using namespace std;

int main(){
    
  int n; cin>>n;

    char mat[n+1][n+1] = {0};
    bool checker[n+1][n+1] = {false};
    int dot = 0,hash = 0;

    for(int x=1;x<=n;x++){
        for(int y=1;y<=n;y++){
            cin>>mat[x][y];
            if(mat[x][y] == '.')
                dot++;
            
                    }

    }
    if(dot % 5 != 0){
        cout<<"NO\n";
        return 0;
    }

    for(int x=2;x<=n-1;x++){
        for(int y=2;y<=n-1;y++){
            if(mat[x][y] == '.' and mat[x-1][y] == '.' and mat[x+1][y] == '.'
            and mat[x][y-1] == '.' and mat[x][y+1] == '.' ){
                  mat[x][y] = '#';
                  mat[x+1][y] = '#';
                  mat[x-1][y] = '#';
                  mat[x][y+1] = '#';
                  mat[x][y-1] = '#';
                  
            }
                
        }
    }


    for(int x= 1;x<=n;x++){
        for(int y= 1;y<=n;y++){

            if(mat[x][y] == '.'){
                cout<<"NO\n";
                return 0;
            }

        }
    }

    cout<<"YES\n";

    return 0;
}