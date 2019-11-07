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
   
   int n;   cin>>n;
   int twos = 0,ones = 0;
   for(int x=1;x<=n;x++){
       int t ;  cin>>t;
       if(t == 2)
        twos++;
        else
        {
            ones++;
        }
        
   }

   if(twos){
       twos--;
       cout<<"2"<<" ";
   }
   if(ones){
       ones--;
       cout<<"1 ";
   }

   while(twos--){
       cout<<"2 ";
   }
   while(ones--){
       cout<<"1 ";
   }
   cout<<endl;

    return 0;
}