#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int a[n] ;  for(int x=0;x<n;x++)  cin>>a[x];

    int i = 0, j = n-1;
    vector<char> ans ;

    int curr = -1;

    while(i<=j){

        if(a[i] >= curr and a[j] >= curr){
            if(a[i] > a[j]){
                ans.push_back('R');
                curr = a[j];
                j--;
            }
            else{
                ans.push_back('L');
                curr = a[i];
                i++;
            }
        }
        else if(a[i] > curr){
            ans.push_back('L');
            curr = a[i];
            i++;
        }
        else if(a[j] > curr){
            ans.push_back('R');
            curr = a[j];
            j--;
        }
        else
            break;

    }
    cout<<ans.size() <<endl;
    for(auto x:ans)
        cout<<x;
    
        cout<<endl;

    return 0;
}