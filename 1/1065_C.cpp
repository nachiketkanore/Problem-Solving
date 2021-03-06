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
 
void do_reverse(int a[] , int l , int r){

    while(l < r)
        swap(a[l++] , a[r--]);

}

int32_t main(){
    FAST;
 
         #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;  cin >> n;
    int k;  cin >> k;

    int vals[n] ;   for(int x=0;x<n;x++)    cin >> vals[x];

    sort(vals , vals+n);
    int sz = vals[n-1] + 1;
    int mx = vals[n-1] , mn = vals[0];

    int levels[mx+1] = {0};

    for(int x=n-1;x>=0;x--){
        levels[vals[x]]++;
    }

    for(int x=mx-1;x>=1;x--){
        levels[x] += levels[x+1];
    }

   
    do_reverse(levels , 1 , mx);

    int dist = mx - mn;

    vi lev_slices;

    for(int x=1;x<=dist;x++){
        lev_slices.pb(levels[x]);
    }


    int slice = 0;
    int add = 0;

    for(int x=0;x<lev_slices.size();x++){
        if(add + lev_slices[x] <= k){
            add += lev_slices[x];
        }else{
            slice++;
            add = lev_slices[x];
        }
    }

    if(add > 0)
        slice++;

    cout << slice;

    return 0;
}
 
 
 
