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
const int inf = 1e18;


int32_t main(){
    FAST;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 	
	string fi , se;
	cin >> fi >> se;

	unordered_map<char,char> f;

	for(int x=0;x<26;x++){
		char one = fi[x] , two = se[x];

		f[one] = two;
	}

	string s;	cin >> s;

	string ans;
	for(auto ch : s){

			char ch1 = ch;
			char ch2 = 0;
			if(ch1 >= 'A' and ch1 <= 'Z') ch2 = ch1 + 32;
			else ch2 = ch1 - 32;

			if(f[ch1])	ans.push_back(f[ch1]);
			else if(f[ch2]) ans.push_back(f[ch2]);
			else ans.push_back(ch);
	}


	for(int x=0;x<s.size();x++){
		if(s[x] >= 'A' and s[x] <= 'Z'){
			if(ans[x] >= 'a' and ans[x] <= 'z')
					ans[x] -= 32;
		}else if(s[x] >= 'a' and s[x] <= 'z'){
			if(ans[x] >= 'A' and ans[x] <= 'Z')
					ans[x] += 32;
		}
	}

	cout << ans;



    return 0;
}
