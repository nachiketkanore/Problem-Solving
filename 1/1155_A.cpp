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

  int n; cin>>n;
  string s;
  cin>>s;
  for(int x=0;x<n-1;x++){

    if(s[x]> s[x+1]){
      cout<<"YES\n";
      cout<<x+1<<" " <<x+2<<endl;
      return 0;
    }

  }
  cout<<"NO"<<"\n";


return 0;
    }
    




