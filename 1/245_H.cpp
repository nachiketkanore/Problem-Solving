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

const int N = 5050;
int dp[N][N]; 

void CountPS(string &str, int n) 
{ 
    // create empty 2-D matrix that counts all palindrome 
    // substring. dp[i][j] stores counts of palindromic 
    // substrings in st[i..j] 
    
    memset(dp, 0, sizeof(dp)); 
  
    // P[i][j] = true if substring str[i..j] is palindrome, 
    // else false 
    bool P[n][n]; 
    memset(P, false , sizeof(P)); 
  
    // palindrome of single length 
    for (int i= 0; i< n; i++) 
        P[i][i] = true; 
  
    // palindrome of length 2 
    for (int i=0; i<n-1; i++) 
    { 
        if (str[i] == str[i+1]) 
        { 
            P[i][i+1] = true; 
            dp[i][i+1] = 1 ; 
        } 
    } 
  
    // Palindromes of length more than 2. This loop is similar 
    // to Matrix Chain Multiplication. We start with a gap of 
    // length 2 and fill the DP table in a way that gap between 
    // starting and ending indexes increases one by one by 
    // outer loop. 
    for (int gap=2 ; gap<n; gap++) 
    { 
        // Pick starting point for current gap 
        for (int i=0; i<n-gap; i++) 
        { 
            // Set ending point 
            int j = gap + i; 
  
            // If current string is palindrome 
            if (str[i] == str[j] && P[i+1][j-1] ) 
                P[i][j] = true; 
  
            // Add current palindrome substring ( + 1) 
            // and rest palindrome substring (dp[i][j-1] + dp[i+1][j]) 
            // remove common palindrome substrings (- dp[i+1][j-1]) 
            if (P[i][j] == true) 
                dp[i][j] = dp[i][j-1] + dp[i+1][j] + 1 - dp[i+1][j-1]; 
            else
                dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1]; 
        } 
    } 
  
    // return total palindromic substrings 
    //return dp[0][n-1]; 
}

int32_t main(){
    FAST;
    
    string s;   cin >> s;
    int n = s.size();

    CountPS(s , n);

    int q;  cin >> q;
    while(q--){
        int l , r;  cin >> l >> r;
         l-- , r--;
         cout << dp[l][r] + (r - l + 1) << endl;
    }


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
 