#include<bits/stdc++.h>
#define int long long
#define test int t;cin >> t;while(t--)
using namespace std;

signed main(){

    int n;  cin >> n;
    int a[n];   
    set<int> ans1, ans2;
    for(int x=0;x<n;x++){
        cin >> a[x];
        
        if(ans1.find(a[x]) == ans1.end())
            ans1.insert(a[x]);
        else if(ans2.find(a[x]) == ans2.end())
            ans2.insert(a[x]);
        else{
            cout << "NO" << endl;
            return 0;
        }
    }

    int one = ans1.size();
    int two = ans2.size();

    vector<int> ff;
    for(auto x : ans2) ff.push_back(x);

    sort(ff.rbegin() , ff.rend());

    cout << "YES\n";
    cout << one << '\n';
    for(auto x : ans1)  cout << x << ' ';   cout << '\n';
    cout << two << '\n';
    for(auto x : ff)    cout << x << ' ';
   
    return 0;
}