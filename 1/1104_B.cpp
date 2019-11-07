#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    // bool n=false;
    // if(n==false)
    string s;  cin>>s;
    stack <char> stk;
    int count=0;
    for(long int x=0;x<s.size();x++){
        if( stk.size() && s[x] == stk.top() ){
            stk.pop();
            count++;

        }
        else{
            stk.push(s[x]);
        }
    }
    if(count % 2 == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    // for(int x=0;x<s.size()-1;x++){
    //         if(s[x]==s[x+1])
    //         {
    //             s.erase(x,x+1);    //    nachiket(&(s));
    //
    //             //break;
    //         }
    //     }
    //     cout<<s;
    //
// for(int x=0;x<stk.size();x++){

// cout<<stk.top();
// stk.pop();}
//
// cout<<endl;
    return 0;
}
// int nachiket(string *s ){
//     for(int x=0;x<*s.size()-1;x++){
//         if(*s[x]==*s[x+1])
//         {
//             *s.erase(x,x+1);
//             nachiket(&(*s));
//
//             //break;
//         }
//     }
// }
