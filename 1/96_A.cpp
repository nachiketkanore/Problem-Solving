#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);
#define tie cin.tie(0);
int main(){
	fastio tie
   string line;
   getline(cin,line);
   int flag = -1;
   int sum=0;

   for(int x=0;x<line.size();x++ ){
       if(line[x]!=flag){
       	flag=line[x];
       	sum=0;
       }
       sum++;
       if(sum>=7)
       	{cout<<"YES\n";
              return 0;}
   }


cout<<"NO\n";
}
