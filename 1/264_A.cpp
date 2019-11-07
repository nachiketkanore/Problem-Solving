
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define mod9 1000000009
#define pi 3.1415926535
#define MAXN 1000001
#define all(v) v.begin(), v.end()
#define ms(s, n) memset(s, n, sizeof(s))
#define prec(n) fixed<<setprecision(n)
#define forci(p,n) for(ll i=p;i<(ll)n;i++)
#define bolt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test ll t;cin>>t;while(t--)
ll zero=0;

ll gcd(ll a,ll b){    if(b==0) return a;    return gcd(b,a%b);}
ll lcm(ll a,ll b) {    return (a/gcd(a,b)*b);}
ll expo(ll x, ll y) {ll res=1;x=x%mod;while(y>0){if(y&1)res=(1ll*res*x)%mod;
    y=y>>1;x=(1ll*x*x)%mod;} return res;}
ll ncr(ll n,ll r){ ll res=1; if(r>n-r)r=n-r; for(ll i=0;i<r;i++) {  res*=n-i;  res/=i+1; } return res;}
ll max(ll a,ll b){return (a>b)?a:b;}
bool prime(ll n){ll i;for(i=2;i<=sqrt(n);i++){if(n%i==0)return false;}return true;}
/*
ll spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (ll i=2; i<MAXN; i++)
        spf[i] = i;
    for (ll i=4; i<MAXN; i+=2)
        spf[i] = 2;
    for (ll i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (ll j=i*i; j<MAXN; j+=i)
            if (spf[j]==j)
            spf[j] = i;
        }
    }
}
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)return(a.second<b.second);*/
 
//https://www.youtube.com/watch?v=k4V3Mo61fJM
using namespace std;
// const ll N = 1e6*3;ll t[4*N];ll n;

// void build() {// build the tree
// ll z=n/2;
// ll x=1;
//   for (ll i = n - 1; i > 0; --i)
//   {
//       if(x==1)
//       t[i] = (t[i<<1]|t[i<<1|1]);
//       else
//       t[i] = (t[i<<1]^t[i<<1|1]);
//       z--;
//       if(!z)
//       {
//           x^=1;
//           z/=2;
//       }
//   }
//    for(ll i=1;i<2*n;i++)
//    cout<<t[i]<<" ";
//    cout<<"\n";
// }
// void update(ll p, ll value) { // set value at position p
//     ll x=1;
//         for (t[p += n] = value; p > 1; p >>= 1) {
//         if(x%2)
//         t[p>>1] = (t[p] | t[p^1]);
//         else
//         t[p>>1] = (t[p] ^ t[p^1]);
//         x++;
//     }
// }
// ll query(ll l, ll r) {  // sum on interval [l, r)
//   ll res = 0;
//   for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
//     if (l&1) res +=t[l++];
//     if (r&1) res +=t[--r];
//   }
//   return res;
// }
signed main()
{
    bolt;
    string s;cin>>s;
    ll n=s.length();
    ll a[n]={0};
    ll left=0,right=n-1;
    ll z=1;
    forci(0,n)
    {
        if(s[i]=='l')
        {
            a[right--]=z;
        }
        else
        {
            a[left++]=z;
        }
        z++;
    }
    forci(0,n)
    cout<<a[i]<<"\n";
    return 0;
}