/* "Hardwork beats talent when talent doesn't work hard"
--------------------------------------------------------
It's been a long day without you, my friend
And I'll tell you all about it when I see you again
We've come a long way from where we began
Oh I'll tell you all about it when I see you again
When I see you again I'll see you again
*/

#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int t; cin>>t;
    while(t-->0){
        int n; cin>>n; string s; cin>>s;
        if(s.size()==1) cout<<"0\n";
        else if(s[0]=='>' || s[s.size()-1]=='<') cout<<"0"<<endl;
        else {
            int f=0,b=0;
            int x=0;
            while(s[x]!='>'){
                f++;
                x++;
            }x=s.size()-1;
            while(s[x]!='<'){
                b++;
                x--;
            }
            cout<<min(f,b)<<endl;

        }
    }

    return 0;
}
