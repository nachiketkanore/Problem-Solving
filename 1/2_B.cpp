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
 
int sod(int n){int sum=0;while(n>0){sum+=n%10;n/=10;}return sum;}
 
int dig(int n){if(n==0)return 1;int cnt=0;while(n>0){n/=10;cnt++;}return cnt;}
 
int divs(int n){int cnt=0;for(int x=1;x*x<=n;x++){if(n%x==0){cnt++;if(n/x!=x)cnt++;}}return cnt;}
 
int isprime(int n){if(n<2)return false;for(int x=2;x*x<=n;x++)if(n%x==0)return false;return true;}
 
int power(int x,unsigned int y,int p=mod){int res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}

bool pal(string s){int l=0,r=s.size()-1;while(l<r){if(s[l++]!=s[r--])return false;}return true;} 
 
const int inf = 1e18;
const int N = 1018;

int two[N][N];
int five[N][N];
int mat[N][N];

void print_path(int h[N][N] , int r , int c){

    if(r == 1 and c == 1)
        return ;

    if(h[r-1][c] < h[r][c-1]){
        print_path(h , r-1 , c) , cout << "D";
    }else {
        print_path(h , r , c-1) , cout << "R";
    }

}

void zero_path(int curr_row , int curr_col , int final_row , int final_col){

    while(curr_row != final_row)
        cout << "D" , curr_row++;

    while(curr_col != final_col)
        cout << "R" , curr_col++;

}

int ans = inf;

int32_t main(){
    FAST;

    memset(two , 60 , sizeof(two));
    memset(five, 60 , sizeof(five));

    two[0][1] = 0 , five[0][1] = 0;

    int r_z =0 , c_z =0;

    int n;  cin >> n;
    bool zero = false;

    for(int x=1;x<=n;x++){
        for(int y=1;y<=n;y++){
            cin >> mat[x][y];
            int u =0 , v = 0;

            if(mat[x][y] == 0){ 
                zero = true;
                r_z = x , c_z = y;
                continue;
            }

            while(mat[x][y] % 2 == 0)   mat[x][y] /= 2 , ++u;
            while(mat[x][y] % 5 == 0)   mat[x][y] /= 5 , ++v;

            two[x][y] = min(two[x-1][y] , two[x][y-1]) + u;
            five[x][y] = min(five[x-1][y] , five[x][y-1]) + v;

        }
    }
   
    ans = min(two[n][n] , five[n][n]);

    if(zero) 
        ans = min(1LL , ans);

    cout << ans << endl;

    if(ans == two[n][n]){
        print_path(two , n , n);
    }else if(ans == five[n][n]){
        print_path(five , n , n);
    }else{

        zero_path(1 , 1 , r_z , c_z);
        zero_path(r_z , c_z , n , n);

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
 