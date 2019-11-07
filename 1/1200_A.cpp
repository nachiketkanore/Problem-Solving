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


int32_t main(){
    FAST;
    int n;  cin >> n;
    int a[10] = {0};
    string s;   cin >> s;

    for(int x=0;x<s.size();x++){
        if(s[x] == 'L'){
            for(int i=0;i<10;i++)
                if(a[i] == 0){ a[i] = 1; break;}
        }else if(s[x] == 'R'){
            for(int i = 9;i >= 0 ;i--)
                if(a[i] == 0){ a[i] = 1; break;}
        }else{
            int no = s[x] -'0';
            a[no] = 0;
        }
    }

    for(int x=0;x<10;x++)   cout << a[x];   cout << endl;

    return 0;
}
