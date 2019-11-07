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
   
    string s;
    cin>>s;
    int sz = s.size()/2;
    int ca = 0,cd = 0;
    for(int x=0;x<s.size();x++){
        if(s[x] == 'a')
            ca++;
        else
            cd++;

    }

    if(ca > sz) 
    cout<<s.size()<<endl;

    else if(cd == ca){
        cout<<s.size()-1<<endl;
    }
    else if(ca < cd) {
        cout<<2*ca -1 <<endl;
    }
    
    





return 0;
}
