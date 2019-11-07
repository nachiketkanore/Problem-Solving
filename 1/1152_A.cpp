/*There's no talent here, this is hard work.
This is an obsession. Talent does not exist, we are all equals as human beings.
You could be anyone if you put in the TIME.
You will reach the top, and that's that.
I am not talented. I am obsessed.*/



/*HARD WORK BEATS TALENT WHEN TALENT DOESN'T WORK HARD*/



/*It's been a long day without you, my friend
And I'll tell you all about it when I see you again
We've come a long way from where we began
Oh I'll tell you all about it when I see you again
When I see you again I'll see you again*/


#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
#define ll long long int
using namespace std;

//functions go here


int main(){
    fast;
  // #ifndef ONLINE_JUDGE 
  //   freopen("input.txt", "r", stdin); 
  //   freopen("output.txt", "w", stdout); 
  // #endif
    
        int n,m;
        cin>>n>>m;
        int chest[n];
        int keys[m];
        int oddch = 0, oddkey = 0;
        int evench = 0, evenkey = 0;
        for(int x=0;x< n;x++) {cin>>chest[x]; if(chest[x] & 1 ) oddch++; else evench++;}
        for(int x= 0 ;x<m;x++) {cin>>keys[x]; if(keys[x] & 1 ) oddkey++ ; else evenkey++;}

        int ans = 0;

        ans =  min(oddch, evenkey) + min(oddkey , evench);
    
        cout<<ans<<endl;



return 0;
}
