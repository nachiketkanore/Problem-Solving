//Question Link : https://atcoder.jp/contests/abc129/tasks/abc129_b

#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main(){

    int n;  cin>>n;
    vector<int> w(n,0);
    int sum1 = 0 , sum2 = 0;
    for(int x=0;x<n;x++){
        cin>>w[x];
        sum2+=w[x];
    }

    int ans = INT16_MAX;

    for(int x=0;x<n;x++){
        sum1+=w[x] , sum2-=w[x];
        int val = abs(sum2-sum1);
        ans = min(ans , val);
    }

    cout<<ans<<endl;
    
    return 0;
}