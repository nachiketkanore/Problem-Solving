#include<bits/stdc++.h>
using namespace std;


int main(){

	    	 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   int n;	cin >> n;
   vector< pair < int , int > > a(n);

   for(int x=0;x<n;x++){
   	cin >> a[x].first;
   	a[x].second = x+1;
   }

   sort(a.begin() , a.end() , greater< pair<int,int>> ());

   int ans = 0;

   for(int x=0;x<n;x++)
   	ans += (a[x].first * x + 1);

   cout << ans << endl;

   for(int x=0;x<n;x++)
   	cout << a[x].second << ' ';


	return 0;
}