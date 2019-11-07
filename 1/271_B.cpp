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


const int N = 1e6;
bool prime[N+3];

vector<int> primes;

void sieve(){

  memset(prime , true , sizeof prime );

  prime[0] = false , prime[1] = false;
  prime[2] = true;

  for(int x=2;x*x<=N;x++){
    if(prime[x] == true){
      for(int i=x*x;i<=N;i+=x)
        prime[i] = false;
    }
  }

} 

void precompute(){

	primes.pb(2);

	for(int x=3;x<=N;x+=2)
		if(prime[x])
			primes.pb(x);

}

const int mod = 1e9+7;
const int inf = 1e18;

int find_answer(int n){

	int ind = lower_bound(all(primes) , n) - primes.begin();
	return primes[ind] - n;

}


int32_t main(){
    FAST;

    	 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    sieve();
    precompute();

    int a,b;	cin>> a >> b;
    int mat[a][b];
    int cal[a][b];

    for(int x=0;x<a;x++)
    	for(int y=0;y<b;y++)
    			cin >> mat[x][y] , cal[x][y] = find_answer(mat[x][y]);

    // for(int x=0;x<a;x++){
    // 	for(int y=0;y<b;y++)
    // 		cout << cal[x][y] << ' ';
    // 	cout << '\n';
    // }

    int ans = inf;

    for(int x=0;x<a;x++){
    	int sum = 0;
    	for(int y=0;y<b;y++)
    		sum += cal[x][y];
    	ans = min(ans , sum);
    }


    for(int x=0;x<b;x++){
    	int sum = 0;
    	for(int y=0;y<a;y++)
    		sum += cal[y][x];
    	ans = min(ans , sum);
    }

    cout << ans;

    return 0;
}
