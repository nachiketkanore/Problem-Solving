/*
It's been a long day without you, my friend
And I'll tell you all about it when I see you again
We've come a long way from where we began
Oh I'll tell you all about it when I see you again
When I see you again
When I see you again
*/
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
 
const int mod = 1e9+7;
 
int sod(int n){int sum=0;while(n>0){sum+=n%10;n/=10;}return sum;}
 
int dig(int n){if(n==0)return 1;int cnt=0;while(n>0){n/=10;cnt++;}return cnt;}
 
int divs(int n){int cnt=0;for(int x=1;x*x<=n;x++){if(n%x==0){cnt++;if(n/x!=x)cnt++;}}return cnt;}
 
int isprime(int n){if(n<2)return false;for(int x=2;x*x<=n;x++)if(n%x==0)return false;return true;}
 
int power(int x,unsigned int y,int p=mod){int res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}

bool pal(string s){int l=0,r=s.size()-1;while(l<r){if(s[l++]!=s[r--])return false;}return true;} 
 
const int inf = 1e18;

const int N = 1050;
int arr[N][N];

int dp1[N][N] , dp2[N][N] , dp3[N][N] , dp4[N][N];

int32_t main(){
    FAST;
    int n,m;    cin >> n >> m;
    int i =0 ,j =0;

    for(i=1;i<=n;i++) {
        for (j = 1;j<=m;j++)
            cin>>arr[i][j];
    }
    for(i=1;i<=n;i++) {
        for (j = 1;j<=m;j++)
            dp1[i][j]=arr[i][j]+max(dp1[i-1][j],dp1[i][j-1]);
    }
    for(i=n;i>=1;i--) {
        for (j = m;j>=1;j--)
            dp2[i][j]=arr[i][j]+max(dp2[i+1][j],dp2[i][j+1]);
    }
    for(i=n;i>=1;i--) {
        for (j = 1;j<=m;j++)
            dp3[i][j]=arr[i][j]+max(dp3[i+1][j],dp3[i][j-1]);
    }
    for(i=1;i<=n;i++) {
        for (j = m;j>=1;j--)
            dp4[i][j]=arr[i][j]+max(dp4[i-1][j],dp4[i][j+1]);
    }    
    int ans = 0;

    for(int i=2;i<n;i++){
        for(int j=2;j<m;j++){
            ans = max(ans,dp1[i][j-1]+dp2[i][j+1]+dp3[i+1][j]+dp4[i-1][j]);
            ans = max(ans,dp1[i-1][j]+dp2[i+1][j]+dp3[i][j-1]+dp4[i][j+1]);
        }
    }

    cout << ans << endl;


    return 0;
}
 
 
 

// const int N = 1e6;
// bool prime[N+3];
// vi primes;
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

//   //for(int x=0;x<N;x++)
//   //  if(prime[x])
//   //      primes.pb(x);
 
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
 