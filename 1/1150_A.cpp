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
    
   int n,m,k;
   cin>>n>>m>>k;

   int a[n]; for(int x=0;x<n;x++) cin>>a[x];
   int b[m]; for(int x=0;x<m;x++) cin>>b[x];

   int minbuy = *min_element(a,a+n);
   int maxsel = *max_element(b,b+m);

   //cout<<minbuy<<" " <<maxsel<<endl;

   int rem = k%minbuy;
   int shares = k/minbuy;
   int key = maxsel*shares;

   int ans = max(k,rem + key);
   cout<<ans<<endl; 

 




    return 0;
}