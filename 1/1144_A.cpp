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
        int alpha[26];
        for(int x=0;x<26;x++) alpha[x]=0;

        string s; cin>>s;
        bool flag = true;

        for(int x=0;x<s.size();x++){
            alpha[s[x]-'a']++;
            if(alpha[s[x]-'a']>1){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout<<"No\n";
            continue;
        }
        int ans = 0;
        for(int x=1;x<26;x++){
            if(alpha[x]==1 and alpha[x-1]==1)
                ans ++;
        }

        if(ans == s.size()-1){
            cout<<"Yes\n";
        }else
        cout<<"No\n";


        }
        return 0;
        }
