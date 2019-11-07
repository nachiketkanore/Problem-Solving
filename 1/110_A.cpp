#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie

    string str; cin>>str;
    int count=0;
    if(str.size()<4 ){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int x=0;x<str.size() ;x++){
        char temp = str[x];
        //cout<<temp;
        if(temp== '4' || temp=='7'){
            count++;

       }
        else {

            continue;}
    }
    if(count==4 || count == 7)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
