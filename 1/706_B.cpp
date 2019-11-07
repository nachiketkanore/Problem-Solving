#include <bits/stdc++.h>
using namespace std;




int main(){
    int n;  cin>>n;
    vector <int> prices (n);
    for(int x=0;x<n;x++)
        cin>>prices[x];

        sort(prices.begin() , prices.end());

    int q; cin>>q;
    vector <int> ans;

    while(q-->0){

        int t; cin>>t;

        int anst = upper_bound(prices.begin() , prices.end() , t) - prices.begin();
        ans.push_back(anst);

    }

    for(auto x:ans)
    cout<<x<<"\n";


    return 0;
}