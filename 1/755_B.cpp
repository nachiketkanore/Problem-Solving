/*There's no talent here, this is hard work.
This is an obsession. Talent does not exist, we are all equals as human beings.
You could be anyone if you put in the TIME.
You will reach the top, and that's that.
I am not talented. I am obsessed.*/

/*HARD WORK BEATS TALENT WHEN TALENT DOESN'T WORK HARD*/

//For all those who walked away from my life:

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
const int LARGE = int(1e9);
const int SMALL = int((-1)* 1e9);
using namespace std;


//functions go here


int main(){
    fast;
    int n,m; cin>>n>>m;

    set <string> a;
    set <string> b;

    for(int x=0;x<n;x++){
        string t;
        cin>>t;
        a.insert(t);
        }
    for(int x=0;x<m;x++){
        string t;
        cin>>t;
        b.insert(t);
        }

    int common = 0;

    for(set<string>::iterator itr = a.begin() ; itr!= a.end(); itr++){
        if(b.count(*itr) > 0)
            common++;
    }

    int u = (common + 1) / 2 + a.size() - common;
    int v = common/2 + b.size() - common;

    cout<<((u > v)? "YES" : "NO") <<endl;




    return 0;
}
