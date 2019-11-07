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
    int alphacount[26] ={0};

int main(){
    fast;
    int k ; cin>>k;
    string s; cin>>s;


    for(int x=0;x<s.size();x++){
        ++alphacount[s[x]-'a'];
    }

    string ans = "";

    for(int x=0;x<26;x++){

        if(alphacount[x]==0)
           continue;

        if(alphacount[x]%k!=0)
            {
                cout<<"-1"<<endl;
                return 0;
            }
        else{
            for(int y=1;y<=alphacount[x]/k;y++){
                ans+='a'+x;
            }
        }


    }

    for(int x=0;x<k;x++){
        cout<<ans;
    }
    cout<<endl;





return 0;
}
