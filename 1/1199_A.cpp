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
    int n;  cin >> n;
    int left  ,right ;  cin >> left >> right;

    int a[n];   for(int x=0;x<n;x++)    cin >> a[x];

 


    for(int x=0;x<n;x++){

        int val = a[x];

        int tl = left , tr = right;

        if(x + right >= n) tr = n - x - 1;
        if(x < left ) tl = x;

        int li = x-1 , ri = x+1;
        int cl = left , cr = right;


        while(a[li] > val and li >= 0 and cl > 0) li-- , tl-- , cl--;
        while(a[ri] > val and ri <  n and cr > 0) ri++ , tr-- , cr--;

        //cout << tl << " " << tr << endl;

        if(tl <=0 and tr <=0){
            cout << x+1 << endl;
            return 0;
        }

         


    }

   

   
    return 0;
}
