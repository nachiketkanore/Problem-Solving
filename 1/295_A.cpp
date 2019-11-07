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

struct node{
    int left , right , data;
};

const int SZ = 1e5 + 21;
int n,noofops , k;
vi a(SZ,0);
vector<node> ops(SZ);
int opsF[SZ] = {0};
int adder[SZ] = {0};




int32_t main(){
    FAST;
      cin >> n >> noofops >> k;
      for(int x=1;x<=n;x++)    cin >> a[x];


    for(int x=1;x<=noofops;x++){
        int l , r , d;  cin >> l >> r >> d;
        // l-- , r-- ;
        ops[x].data = d , ops[x].left = l ,ops[x].right = r;
    }

    

    for(int x=1;x<=k;x++){
        int l , r ; cin >> l >> r;
       // l-- , r--;
        opsF[l]++;
        opsF[r+1]--;

    }

    //Prefix array to get actual frequency
    for(int x=1;x<=noofops;x++) opsF[x] += opsF[x-1];

    // for(int x=0;x<noofops;x++)
    //     cout << x+1 << "th operation needs to be perf = " << opsF[x] <<
    //              " times " << endl;

   
    
    for(int x=1;x<=noofops;x++){
        int value = opsF[x] * ops[x].data;
        int l = ops[x].left , r = ops[x].right;

        adder[l] += value;
        adder[r+1] -= value;

    }

    for(int x=1;x<=n;x++)
        adder[x] += adder[x-1];
        
    for(int x=1;x<=n;x++) a[x] += adder[x];

    for(int x=1;x<=n;x++)    cout << a[x] << " " ;   cout << endl;

    return 0;
}
