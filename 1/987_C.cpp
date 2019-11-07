#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
#define precise(x) cout << fixed << setprecision(x)
#define pb push_back
#define mp make_pair
#define test int t; cin>>t; while(t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
using namespace std;
 
/*
It's been a long day without you, my friend
And I'll tell you all about it when I see you again
We've come a long way from where we began
Oh I'll tell you all about it when I see you again
When I see you again
When I see you again
*/
 
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef pair<int,int> pii;
typedef unordered_map<int,int> mp;
 
const int mod = 1e9+7;
 
int sod(int n){int sum =0;while(n > 0){sum += n %10;n /= 10;}return sum;}
 
int dig(int n){int cnt =0;while(n > 0){n /= 10;cnt++;}return cnt;}
 
int divs(int n){int cnt = 0;for(int x=1;x*x<=n;x++){if(n % x == 0){cnt++;if(n/x != x)cnt++;}}return cnt;}
 
int isprime(int n){if(n < 2)return false;for(int x=2;x*x<=n;x++)if(n % x == 0) return false;return true;}
 
int power(int x,unsigned int y,int p=mod) {int res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;} 
 
const int inf = 1e18;


 
int32_t main(){
    FAST;
 
         #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;  cin >> n;
    int a[n];   for(int x=0;x<n;x++)    cin >> a[x];
    int cost[n];    for(int x=0;x<n;x++)    cin >> cost[x];

    int ans = inf;

    for(int j=1;j<n-1;j++){
        int mid_val = a[j];
        int middle_cost = cost[j];
        int left_cost = inf , right_cost = inf;

        for(int i=0;i<j;i++){
            if(a[i] < mid_val){
                left_cost = min(left_cost , cost[i]);
            }
        }

        for(int i=j+1;i<n;i++){
            if(a[i] > mid_val){
                right_cost = min(right_cost , cost[i]);
            }
        }

        ans = min(ans , middle_cost+ right_cost + left_cost);

    }

    if(ans != inf)
        cout << ans;
    else
        cout << -1;

    return 0;
}
 
 
 
