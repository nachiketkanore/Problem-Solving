
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

bool pal(string s){int l = 0 , r = s.size()-1;while(l < r){if(s[l++] != s[r--])return false;}return true;}

const int N = 2e5+200;
vector<int> g[N];
int deg[N];
bool vis[N];
vector<vi> sack;

vi temp;

void dfs(int node){

    temp.pb(node);
    vis[node] = true;

    for(auto &child : g[node]){
        if(!vis[child])
            dfs(child);
    }

}

int32_t main(){
    FAST;

    int n,m;    cin >> n >> m;
    for(int x=0;x<m;x++){
        int u,v;    cin >> u >> v;
        g[u].pb(v) , g[v].pb(u);
        deg[v]++ , deg[u]++;
    }

    for(int x=1;x<=n;x++){
        if(vis[x])  continue;

        dfs(x);

        sack.pb(temp);

        temp.clear();
    }

    int ans = 0;
    
    for(int x=0;x<sack.size();x++){
        if(sack[x].size() <= 2)     continue;

        int sz = sack[x].size();

        int degtwo = 0;

        for(int &node : sack[x])
            degtwo += (deg[node] == 2);
        
        ans += (degtwo == sz);

    }

    cout << ans;



    return 0;
}
 
 
 
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


// const int N = 1e6+50;
// int spf[N+11];
 
// void SPF(){
 
// 	spf[1] = 1; 
  
//     for (int i = 2; i <= N; i++) 
//     { 
//         if (spf[i] == 0) 
//         { 
//             spf[i] = i; 
  
//             for (int j = 2*i; j <= N; j += i) 
//                 if (spf[j] == 0) 
//                    spf[j] = i; 
//         } 
//     } 
// }
 