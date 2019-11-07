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
 
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef pair<int,int> pii;
typedef unordered_map<int,int> mp;
 
int sod(int n){int sum =0;while(n > 0){sum += n %10;n /= 10;}return sum;}
 
int dig(int n){int cnt =0;while(n > 0){n /= 10;cnt++;}return cnt;}
 
int divs(int n){int cnt = 0;for(int x=1;x*x<=n;x++){if(n % x == 0){cnt++;if(n/x != x)cnt++;}}return cnt;}
 
int isprime(int n){if(n < 2)return false;for(int x=2;x*x<=n;x++)if(n % x == 0) return false;return true;}
 
 
// const int N = 1e6;
// bool prime[N+3];
// void sieve(){
 
//   memset(prime , true , sizeof prime );
 
//   prime[0] = false , prime[1] = false;
//   prime[2] = true;
 
//   for(int x=2;x*x<=N;x++){
//     if(prime[x] == true){
//       for(int i=x*x;i<=N;i+=x)
//         prime[i] = false;
//     }
//   }
 
// } 
 
 
const int mod = 1e9+7;
const int inf = 1e18;
 
 
int32_t main(){
    FAST;
 
    	 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 
    string s;
    vector<string> a;
 
    int mx = 0;
 
    while(getline(cin ,s)){
    	int n = s.size();
    	a.pb(s) , mx = max(mx , n);
    }
 
    int stars = 2;
 
    for(int x=0;x<stars+mx;x++)
    	cout << "*";	cout << '\n';
 
    bool ch = 1;
 
    for(int x=0;x<a.size();x++){
    	string t = a[x];
    	int spaces = mx  - t.size();
    	
    	int fi = 0 , se = 0;
    	if(spaces & 1){
    		fi = spaces / 2;
    		se = spaces - fi;
    	}else{
    		fi = spaces / 2;
    		se = spaces / 2;
    	}
 
    	if(spaces % 2 == 0){
    		while(fi--)
    			t = ' ' + t;
    		while(se--)
    			t += ' ';
    	}else{
 
    		if(ch){
    			int sh = min(fi , se);
    			int lg = max(fi , se);
 
    			while(sh--)
    				t = " " + t;
    			while(lg--)
    				t += " ";
 
 
 
    			ch = !ch;
    		}else{
    			int sh = min(fi , se);
    			int lg = max(fi , se);
 
    			while(lg--)
    				t = " " + t;
    			while(sh--)
    				t += " ";
 
 
 
    			ch = !ch;
 
    		}
 
 
    	}
 
 
 
 
    	t = "*" + t + "*";
 
    	cout << t << endl;
    }
 
 
 
    for(int x=0;x<stars+mx;x++)
    	cout << "*";	cout << '\n';
 
    return 0;
}