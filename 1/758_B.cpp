#include<bits/stdc++.h>
using namespace std;
int main(){
    const int M = 4;
    string K {"RBYG"};
    string s; cin>>s;

    vector <char> v (M,0);
    vector <long> w (M,0);

    for(int p=0;p<s.size();p++){
        if(s[p]=='!') ++w[p%M];
        else v[p%M]=s[p];
    }
    for(int p=0;p<M;p++){
        for(int u=0;u<M;u++){
            if(v[u]!=K[p]) continue;
            else {cout<<w[u]<<" "; break;}
        }
    }
    cout<<endl;

    return 0;
}
