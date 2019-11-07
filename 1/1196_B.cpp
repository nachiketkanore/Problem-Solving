#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define umapii unordered_map<int,int>
#define test int t; cin>>t; while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;



int32_t main(){
    FAST;
    test{
        int n,k;  cin>> n >> k;
        vi s(n); int sum =0;
        for(int x=0;x<n;x++)    cin>> s[x] , sum += s[x];
        
        
        if(k&1 and sum %2 ==0){
            cout << "NO" << endl;
            continue;
        }else if(k % 2== 0 and sum & 1){
            cout << "NO" << endl;
            continue;
        }

        int cnt = k;
        vi ans; int h = 0;
        bool po = true;

        for(int x=0;x<n;x++){
            h += s[x];
            if(k == 1){
                if(sum % 2 == 1){
                    ans.pb(n) ; break;
                }else{
                    po = false;
                    break;
                }
            }

            if(h % 2 == 1 and k > 0){

               // cout << "check h : " << h << " ";
                ans.pb(x+1);
                    h = 0;
                k--;
            }
            sum -= s[x];

        }

        if(ans.size() != cnt or !po){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        for(auto x: ans)
            cout << x << " ";
            cout << endl;


    }

    return 0;
}
