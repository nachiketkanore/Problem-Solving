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
const int N = 1e5+20;
const int LG = log2(N) + 1;
int n;

vector<int> g[N];

int tim = 0;
int parent[LG][N];
int tin[N], tout[N], level[N];

void dfs(int k, int par, int lvl)
{
    tin[k] = ++tim;
    parent[0][k] = par;
    level[k] = lvl;
    for (auto it : g[k])
    {
        if (it == par)
            continue;
        dfs(it, k, lvl + 1);
    }
    tout[k] = tim;
}

int walk(int u, int h)
{
    for (int i = LG - 1; i >= 0; i--)
    {
        if ((h >> i) & 1)
            u = parent[i][u];
    }
    return u;
}

void precompute()
{
    for (int i = 1; i < LG; i++)
        for (int j = 1; j <= n; j++)
            if (parent[i - 1][j])
                parent[i][j] = parent[i - 1][parent[i - 1][j]];
}

int LCA(int u, int v)
{
    if (level[u] < level[v])
        swap(u, v);
    int diff = level[u] - level[v];
    for (int i = LG - 1; i >= 0; i--)
    {
        if ((1 << i) & diff)
        {
            u = parent[i][u];
        }
    }
    if (u == v)
        return u;
    for (int i = LG - 1; i >= 0; i--)
    {
        if (parent[i][u] && parent[i][u] != parent[i][v])
        {
            u = parent[i][u];
            v = parent[i][v];
        }
    }
    return parent[0][u];
}

int dist(int u, int v)
{
    return level[u] + level[v] - 2 * level[LCA(u, v)];
}


int calc(int f, int s, int t){
	int ans = 0;
	bool is1 = LCA(f, s) == f, is2 = LCA(f, t) == f;
	if(is1 != is2)  return 1;
	if(is1)
		ans = max(ans, level[ LCA(s, t) ] - level[ f ]);
	else if(LCA(f, s) != LCA(f, t))
		ans = max(ans, level[ f ] - max(level[ LCA(f, s) ], level[ LCA(f, t) ]));
	else
		ans = max(ans, level[ f ] + level[ LCA(s, t) ] - 2 * level[ LCA(f, t) ]);
	return ans + 1;
}

int32_t main(){
    FAST;

        	 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int q;	cin >> n >> q;
    for(int x=2;x<=n;x++){
    	int u = x , v;
    	cin >> v;
    	g[u].pb(v) , g[v].pb(u);
    }

    dfs(1,0,0);
    precompute();

    while(q--){
    	int a,b,c;	cin >> a >> b >> c;
    	int ans = 0;
    	ans = max({calc(a,b,c) , calc(b,a,c) , calc(c,b,a)});
  //   	int fi = dist(LCA(a,b) , c);
  //   	int se = dist(LCA(a,c) , b);
  //   	int th = dist(LCA(b,c) , a);
  //   	vector<int> ff(3,0);
  //   	ff[0] = fi+1 , ff[1] = se+1 , ff[2] = th+1;
		// sort(all(ff));

		// int ans = 0;
    	
  //   	int LCA_ab = LCA(a,b);
  //   	int LCA_bc = LCA(b,c);
  //   	int LCA_ac = LCA(a,c);

  //   	int temp = LCA(LCA_bc , a);

  //   	if(temp == a or temp == b or temp == c){
  //   		int middle_node;

  //   		vector<int> tt(3) ; tt[0] = level[a] , tt[1] = level[b] , tt[2] = level[c];

  //   		sort(all(tt));
  //   		pii others;

  //   		int ht = level[1];
  //   		if(level[a] == ht) middle_node = a , others.first = b , others.second = c;
  //   		else if(level[b] == ht) middle_node = b , others.first = a , others.second = c;
  //   		else middle_node = c , others.first = a , others.second = b;

  //   		int ret = 0;

  //   		ret = max({dist(middle_node , others.first) , dist(middle_node , others.second)});
  //   		cout << ret << endl;
  //   		continue;

  //   	}


  //   	if(LCA_ab == LCA_bc){
  //   		ans = max({dist(LCA_bc,a) , dist(LCA_bc , b) , dist(LCA_bc,c)});
  //   	}else{
    		
  //   		int wanted_LCA ;
  //   		if(level[LCA_bc] < level[LCA_ab])
  //   			wanted_LCA = LCA_ab;
  //   		else wanted_LCA  = LCA_bc;

  //   		ans = max({dist(wanted_LCA , a) , dist(wanted_LCA , b) , dist(wanted_LCA,c)});

  //   	}


    	cout << ans << '\n';
    }


    
    return 0;
}
