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
  bool marker[100005] = {false};


int main(){
    fast;
  // #ifndef ONLINE_JUDGE 
  //   freopen("input.txt", "r", stdin); 
  //   freopen("output.txt", "w", stdout); 
  // #endif
    int n;cin>>n;
        string s;
        cin>>s;
        int cnt = 0,oth= 0;
    for(auto x: s){
        if(x - '0' ==  8)   cnt++;
    }
     oth = n - cnt;
     int chances = n - 11;

    if(cnt == 0 or oth == n or cnt <= chances/2)
    {
        cout<<"NO\n";
        return 0;
    }
    int c1 = chances/2,c2= chances/2;
  

        for(int x = 0;x<n and c1>0;x++){
            if(s[x]-'0' != 8){
                marker[x] = true;
                c1--;
            }

        }

         for(int x = 0;x<n and c2>0;x++){
            if(s[x]-'0' == 8){
                marker[x] = true;
                c2--;
            }

        }

        for(int i = 0;i<n;i++){

            if(marker[i] == false){
                if(s[i]-'0' == 8){
                    cout<<"YES\n";
                    return 0;
                }
                else{
                    cout<<"NO\n";
                    return 0;
                }
            }

        }

    
    


return 0;
}
