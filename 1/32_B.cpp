#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
   string s;
   cin>>s;
   for(int x=0;x<s.size();x++){
        if(s.substr(x,2)=="--"){ cout<<"2";x++;}
        else if(s.substr(x,2)=="-.") {cout<<"1";x++;}
        else if(s.substr(x,1)==".") cout<<"0";
   }
   cout<<endl;

    return 0;
}
