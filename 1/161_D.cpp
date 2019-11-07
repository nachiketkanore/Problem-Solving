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

const int mod = 1e9+7;
const int inf = 1e18;

const int N = 50005;
const int K = 505;
int k;
int ans;

vector<int> tree[N];
int dp[N][K];

void dfs(int node ,int par){

	dp[node][0] = 1;	//Base case : There is only one node(itself) at distance 0 from node (N)

	for(auto child : tree[node]){
		if(child != par){

			dfs(child , node);

			for(int d=1;d<=k;d++) ans += dp[node][d-1] * dp[child][k-d];
			for(int d=1;d<=k;d++) dp[node][d] += dp[child][d-1];


		}
	}

}


int32_t main(){
    FAST;

    	 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;	cin >> n >> k;
    for(int x=0;x<n-1;x++){
    	int u,v;	cin >> u >> v;
    	tree[u].pb(v) , tree[v].pb(u);
    }

    dfs(1,0);


    cout << ans;

    return 0;
}
