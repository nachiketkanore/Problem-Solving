#include<bits/stdc++.h>
#include<cstdio>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
const int low = 32;
using namespace std;
int main(){
    string str;
    vector <char> v;
    getline(cin,str);
    for(int x=0;x<str.size();x++){
        if(str[x]!='a' && str[x]!='e' &&str[x]!='i' &&str[x]!='o' &&str[x]!='u' &&str[x]!='y' &&
         str[x]!='A' && str[x]!='E' &&str[x]!='I' &&str[x]!='O' &&str[x]!='U' && str[x]!='Y' )
         v.push_back(str[x]);
    }
    for(int x=0;x<v.size();x++){
        cout<<".";
        if(v[x]>=65 && v[x]<=90)
        printf("%c",v[x]+32);
        // cout<<v[x] | low;
        //cout<<v[x]+32;
        else
        cout<<v[x];
    }printf("\n");


    return 0;
}
