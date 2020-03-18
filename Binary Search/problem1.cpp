//Problem : https://www.codechef.com/problems/SNAKEEAT
//Solution : 
#include<bits/stdc++.h>
#define int long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 1e5+10;
const int mod = 998244353;
const int inf = 1e18;
int n, q, len[N], pref[N];

bool good(int left, int right, int k){
	int subarraySum = pref[right] - pref[left - 1];
	int req = k * (right - left + 1) - (subarraySum);
	int have = left - 1;
	return have >= req;
}

void giveAnswer(int k){
	int ans = 0;
	int ind = lower_bound(len + 1, len + n + 1, k) - (len);
	//cout << "LB = " << ind << '\n';
	ind--;
	ans += n - ind;
	int lo = 1, hi = ind;

	int pos = inf;

	while(lo <= hi){
		int mid = (lo + hi)/2;
		if(good(mid,ind,k)){
			pos = min(pos, mid);
			hi = mid - 1;
		}else lo = mid + 1;
	}

	if(pos != inf){
		ans += ind - pos + 1;
		//cout << "pos = " << pos << '\n';
	}

	cout << ans << '\n';
}

void solve(){
	cin >> n >> q;

	for(int i = 1; i <= n; i++)
		cin >> len[i];

	sort(len + 1, len + n + 1);

	for(int i = 1; i <= n; i++){
		pref[i] = len[i];
		pref[i] += pref[i-1];
	}

	while(q--){
		int k;
		cin >> k;
		giveAnswer(k);
	}

}

int32_t main(){
	ios::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
   		solve();
}
