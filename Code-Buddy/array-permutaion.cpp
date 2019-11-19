#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &a ,int n){

    sort(a.begin() , a.end());
    int ans = 0;
    int left = 0  , right = n-1;

    while(left < right){
        cout << a[right] << " " << a[left] << " ";
        ans += (a[right--] - a[left++]);
    
    }
    cout << endl;
    return ans;

}

int main(){

    int n;  cin >> n;
    vector<int> a(2*n);   for(int x=0;x<2*n;x++) cin >> a[x];
    cout << solve(a,2*n) << endl;

    return 0;
}