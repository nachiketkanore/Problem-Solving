#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define null nullptr
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define precise(x) cout << fixed << setprecision(x)
#define pb push_back
#define mp make_pair
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef pair<int, int> pii;
typedef unordered_map<int, int> mp;

const int mod = 1e9 + 7;
const int inf = 1e18;

vector<int> f[104];
int taken[1000];

int32_t main()
{

    FAST;

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int n;
    cin >> n;
    int a[n];
    for (int x = 0; x < n; x++)
    {
        cin >> a[x];

        if (a[x] == 1)
        {
            cout << 1 << endl;
            return 0;
        }
    }

    sort(a, a + n);

    for (int x = 0; x < n; x++)
    {
        int mn = a[x];
        for (int i = 0; i < n; i++)
        {
            if (a[i] % mn == 0 and !taken[i])
                f[mn].push_back(a[i]), taken[i] = 1;
        }
    }

    int ans = 0;

    for (int x = 0; x <= 100; x++)
    {
        if (f[x].size() > 0)
            ans++;
    }

    cout << ans;

    return 0;
}
