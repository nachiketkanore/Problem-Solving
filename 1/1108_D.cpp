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
 
int dig(int n){int cnt =0;while(n > 0){n /= 10;cnt++;}return cnt;}
 
int divs(int n){int cnt = 0;for(int x=1;x*x<=n;x++){if(n % x == 0){cnt++;if(n/x != x)cnt++;}}return cnt;}
 
int isprime(int n){if(n < 2)return false;for(int x=2;x*x<=n;x++)if(n % x == 0) return false;return true;}
 
int power(int x,unsigned int y,int p=mod) {int res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;} 
 
const int inf = 1e18;
 
int32_t main(){
    FAST;
 
         #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   int n;  cin >> n;
   string s;    cin >> s;

   int ans = 0;

   if(n == 2){
    if(s == "RR")
        cout << "1\nRG\n";
    else if(s == "GG")
        cout << "1\nRG\n";
    else if(s == "BB")
        cout << "1\nBR\n";
    else
        cout << "0\n" << s << '\n';
    return 0;
   }
   
   for(int x=1;x<n-1;x++){
    if(s[x] == s[x-1] and s[x] == s[x+1]){
        if(s[x] == 'R')
            s[x] = 'G';
        else if(s[x] == 'G')
            s[x] = 'R';
        else if(s[x] == 'B')
            s[x] = 'R';
        ans++;
    }
   }


   for(int x=1;x<n-1;x++){
    char prev = s[x-1];
    char pos = s[x] , next = s[x+1];

    if(prev == pos){
        set<char> hello;
        hello.insert('R') , hello.insert('G') , hello.insert('B');
        auto it1 = hello.find(prev) , it2 = hello.find(next);
        hello.erase(it1) , hello.erase(it2);

        char want = *hello.begin();

        s[x] = want;
        ans++;

    }else if(pos == next){
        set<char> hello;
        hello.insert('R') , hello.insert('G') , hello.insert('B');
        auto it1 = hello.find(prev) , it2 = hello.find(next);
        hello.erase(it1) , hello.erase(it2);

        char want = *hello.begin();

        s[x] = want;
        ans++;
    }


   }


   cout << ans << '\n';
   cout << s;



    return 0;
}
 
 
 
