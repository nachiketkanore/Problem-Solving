#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(), x.rend()
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

const int mod = 1e9+7;
const int N = 2e5;

vector<int> tree[N];
vector<int> init(N,0);
vector<int> goal(N,0);
vector<int> vis(N,0);
vector<int> ans;
int cnt = 0;

void dfs(int node ,int odd , int even , int lev ){

    vis[node] = 1;

    if(lev % 2){      //If level is odd
        init[node] += even;
        init[node] %= 2;
        if(init[node] != goal[node]){
            even++;
            even %= 2;
            ans.push_back(node);
        }
    }else{      //If level is even
        init[node] += odd;
        init[node] %= 2;
        if(init[node] != goal[node]){
            odd++;
            odd %= 2;
            ans.push_back(node);
        }
    }

    for(auto child : tree[node]){
        if(!vis[child]){
            dfs(child , odd,even , lev+1);
        }
    }


}


int32_t main(){
    FAST;
    int n;  cin >> n;
    for(int x=0;x<n-1;x++){
        int u,v;    cin >> u >> v;
        tree[u].pb(v) , tree[v].pb(u);
    }

    for(int x=1;x<=n;x++)   cin >> init[x];
    for(int x=1;x<=n;x++)   cin >> goal[x];

    dfs(1,0,0,0);

    cout << ans.size()<< '\n';
    for(auto c : ans)   cout << c << '\n';


    return 0;
}
