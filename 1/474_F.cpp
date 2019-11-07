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

int power(int x,unsigned int y,int p=(int)(1e9+7)) {int res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;} 


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

const int L = 17;
const int S = 1 << L;
const int MAX_S = 2 * S + 20;

const int MAX_N = 2e5+21;
int n;

int segtree[MAX_S];
int a[MAX_N];

pii vals[MAX_N];

int getgcd(int a , int b){

	int res = 0;

	for(a += S , b += S ;a < b ; a /= 2 , b /= 2){
		if(a % 2) res = __gcd(res , segtree[a++]);
		if(b % 2) res = __gcd(res , segtree[--b]);
	}

	return res;

}


int32_t main(){
    FAST;

    	 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    cin >> n;

    for(int x=0;x<n;x++){
    	cin >> a[x];
    	segtree[S + x] = a[x];
    	vals[x] = pii(a[x] , x);

    }

    for(int x=S-1;x>0;x--){
    	segtree[x] = __gcd(segtree[2*x] , segtree[2*x+1]);
    }

    sort(vals , vals+n);

    int t;	cin >> t;

   	while(t--){
   		int l ,r;	cin >> l >> r;
   		l--;
   		int g = getgcd(l,r);

   		int res = lower_bound(vals , vals + n , pii(g,r)) - lower_bound(vals , vals+n , pii(g,l));

   		cout << (r  - l - res) << '\n';


   	}

    

    return 0;
}
