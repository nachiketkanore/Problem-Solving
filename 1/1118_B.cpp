#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
using namespace std;
int main(){
    fast;
    int n; cin>>n;
    vector <int> a (n);
    int ePref = 0, oPref = 0, eSuf = 0, oSuf = 0;
    for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (i & 1) eSuf += a[i];
		else oSuf += a[i];
	}
    int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (i & 1) eSuf -= a[i];
		else oSuf -= a[i];
		if (ePref + oSuf == oPref + eSuf) {
			++ans;
		}
		if (i & 1) ePref += a[i];
		else oPref += a[i];
	}
	cout<<ans<<endl;

    return 0;
}
