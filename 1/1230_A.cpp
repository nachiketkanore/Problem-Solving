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

const int mod = 1e9+7;
const int inf = 1e18;

int sod(int n){
  int sum =0;
  while(n > 0){
    sum += n %10;
    n /= 10;
  }
  return sum;
}

int dig(int n){
  int cnt =0;
  while(n > 0){
    n /= 10;
    cnt++;
  }

  return cnt;
}

int divs(int n){
  int cnt = 0;
  for(int x=1;x*x<=n;x++){
    if(n % x == 0){
      cnt++;
      if(n/x != x)
        cnt++;
    }
  }
  return cnt;
}

const int MOD = 1073741824;

int32_t main(){
    FAST;



    int n = 4;
    int a[n];
    for(int x=0;x<n;x++)
      cin>>a[x];  

    sort(a,a+n);

    int total = a[0] + a[1] + a[2] + a[3];

    for(int x=0;x<n;x++){
      if(a[x] == total - a[x]){
        cout << "YES" << endl;
        return 0; 
      }
    }

    for(int x=0;x<n-1;x++){
      for(int y=x+1;y<n;y++){
        int sum = a[x] + a[y];
        if(sum == total - sum){
          cout <<"YES" << endl;
          return 0;
        }
      }
    }

    for(int x=0;x<n-2;x++){
      for(int y=x+1;y<n-1;y++){
          for(int z = y+1;z<n;z++){
            int sum = a[x] + a[y] + a[z];
            if(sum == total - sum){
              cout << "YES" << endl;
              return 0;
            }
          }
        
      }
    }
    cout << "NO" << endl;



    return 0;
}
