/*
    Give me some sunshine , give me some rain , give me another chance 
                       I wanna grow up once again .
*/

#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>

using namespace std;

int main(){
   
    int n ;
    string s, t;
    cin>>n>>s>>t;

    if(s == t){
        cout<<"0"<<endl;
        cout<<endl;
        return 0;
    }

    vector<int> ans ;

    for(int x=0;x<n;x++){
        if(s[x] == t[x])
            continue;
        int k = -1;

        for(int y = x+1 ;y<n;y++){
            if(t[x] == s[y]){
                k = y;
                break;
            }
        }

        if(k == -1){
            cout<<"-1"<<endl;
            return 0;
        }

        for(int y = k-1;y>=x;y--){
            swap(s[y] , s[y+1]);
            ans.push_back(y);
        }

    }

    cout<<ans.size()<<endl;
    
    for(auto it: ans){
        cout<<it + 1<<" ";
    }
    cout<<endl;
   
 




    return 0;
}