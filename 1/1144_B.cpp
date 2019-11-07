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
    int n;
    cin>>n;
    vector <int> even,odd;

    for(int x=0;x<n;x++){
        int t ; cin>>t;
        if(t&1) odd.push_back(t);
        else    even.push_back(t);

    }

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    int t= max(odd.size(),even.size())-min(odd.size(),even.size());
    t--;

    int ans=0;

    if(even.size()>odd.size()){
        for(int i=0;i<t;i++){
            ans+=even[i];
        }
    }
    else{
        for(int i=0;i<t;i++){
            ans+=odd[i];
        }
    }

    cout<<ans<<endl;

return 0;
}
