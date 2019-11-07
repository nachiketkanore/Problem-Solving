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
    int a[n];
    set<int > s;
    for(int x=0;x< n;x++) {
        cin>>a[x];
        s.insert(a[x]);
        if(s.size() > 3 ){
          cout<<"-1\n";
          return 0;
        }
    }

    int v[s.size()];
    int x= 0;

    for(set<int> :: iterator it= s.begin(); it!= s.end(),x<s.size()  ;  it++,x++){
        int t = *it;
        v[x] = t;
    }

    if(s.size() == 2)
      { int t = v[1] - v[0];
        if(!(t&1))
          cout<<t/2<<endl;
        else
        {
          cout<<t<<endl;
        }
        
        return 0;}
    if(s.size() == 3 and v[2] - v[1] == v[1] -v[0])
      {cout<<v[2] - v[1]<<endl;return 0;}
    if(s.size() == 1)
      {cout<<"0\n"; return 0;}

    cout<<"-1\n";


return 0;
}
