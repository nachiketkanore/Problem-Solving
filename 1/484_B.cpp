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
const int N = 2e6 + 21;
int arr[N] = {0};
int mx[N] = {0};

int32_t main(){
    FAST;
    int n;  cin >>n;
    for(int x=0;x<n;x++){
        int val;    cin>>val;
        arr[val] = val;
    }

    for(int x=1;x<N;x++)    mx[x] = max(mx[x-1] , arr[x]);

    int ans = 0;

    for(int x= 2;x<N;x++){
        
        int num = arr[x];
        if(num == 0) continue;

        for(int y=2*x;y<N;y+=x)
            ans = max(ans, mx[y-1] % num);

    }

    cout << ans << endl;

    return 0;
}
