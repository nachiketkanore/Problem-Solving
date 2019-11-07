/*There's no talent here, this is hard work.
This is an obsession. Talent does not exist, we are all equals as human beings.
You could be anyone if you put in the TIME.
You will reach the top, and that's that.
I am not talented. I am obsessed.*/

/*HARD WORK BEATS TALENT WHEN TALENT DOESN'T WORK HARD*/

//For all those who taught me how to live life:

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
    int t; cin>>t;
    while(t-->0){
        int n; cin>>n;
        string s; cin>>s;
        string temp = " "+s;
        bool flag = false;

        for(int x=1;x<=n/2;x++){
            int diff = (abs)((int)(temp[x] - temp[n-x+1] ));
            if(diff == 0 or diff == 2)
                flag = true;
            else{
                flag = false;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }







return 0;
}
