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
    int n ; cin>>n;
    int a,b;

    int c,d = 0;
    bool flag = false;

    for(int x=0;x<n;x++){
        cin>>a>>b;

        if(a < b)
            c++;
        else if(a > b)
            d++;

        if(c>=1 and d>=1)
            {
                flag = true;
                break;
            }
    }
    if(flag)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;

    return 0;
}
