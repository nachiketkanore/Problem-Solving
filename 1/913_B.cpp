/*
    Give me some sunshine , give me some rain , give me another chance 
                       I wanna grow up once again .
*/

#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
// #define int ull
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

    const int N = 100005;
    vector<int> g[N];
    bool vis[N] = {false};

    bool bfs(int root){

        queue<int> q;
       q.push(root);
       vis[root] = true;

       while(!q.empty()){

           int temp = q.front();
           q.pop();
            int sz = 0;
          
          bool f = 0;

          for(auto it = g[temp].begin();it!=g[temp].end();it++){

              if(!vis[*it]){
                  f = 1;
                  vis[*it] = true;
                  q.push(*it);
                  if(g[*it].empty())
                    sz++;
              }


          }

          if(f == 1 and sz < 3){
            
                return 0;
          }




       }
       return 1;


    }

int main(){
    fast;
    
    int n ;     
    cin>>n;
    if(n<=3){
        cout<<"No"<<endl;
        return 0;
    }
   

    for(int x=2;x<=n;x++){
        int t; cin>>t;
        g[t].push_back(x);
    }

    bool ans = bfs(1);
   
   if(ans == 1){
       cout<<"Yes\n";
       return 0;
   }
   else{
       cout<<"No"<<endl;
       return 0;
   }
    
   return 0;
}