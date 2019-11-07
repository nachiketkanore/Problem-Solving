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
 
int dig(int n){if(n==0) return 1;int cnt =0;while(n > 0){n /= 10;cnt++;}return cnt;}
 
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

    int n;	cin >> n;
    int a[n];
    int sum = 0;
    unordered_map<int,int> f;
    for(int x=0;x<n;x++){
    	cin >> a[x];
    	sum += a[x];
    	f[a[x]]++;
    }

    
    vi ans;

    for(int x=0;x<n;x++){
    	sum -= a[x];
    	f[a[x]]--;

    	if(sum % 2 == 0){
    		if(f[sum / 2] > 0)
    			ans.pb(x+1);
    	}

    	sum += a[x];
    	f[a[x]]++;

    }

   


    cout << ans.size() << endl;
    for(auto x : ans)
    	cout << x << " ";

    return 0;
}

 