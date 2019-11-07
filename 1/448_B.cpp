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
 	
	string fi,se;
	cin >> fi >> se;

	string s = fi , t = se;

	int n = s.size();
    int m = t.size();

    int cnt[26] = {0};

	int f1[26] = {0} , f2[26] = {0};

	for(auto c : fi) f1[c-'a']++;
	for(auto c : se) f2[c-'a']++;

	for(int i=0;i<n;++i) cnt[s[i]-'a']++;
    for(int i=0;i<m;++i) cnt[t[i]-'a']--;

	bool sau = false;
    for(int i=0,j=0; i<n; ++i){
        if(j<m && s[i]==t[j]) ++j;
        if(j==m) sau = true;
    }


    bool sar = 1 , all = 1;

    for(int x=0;x<26;x++){
    	sar&=cnt[x]==0;
        all&=cnt[x]>=0;
    }

    if(sau) cout<<"automaton"<<endl; 
    else if(sar) cout<<"array"<<endl; 
    else if(all) cout<<"both"<<endl;
    else cout<<"need tree"<<endl;


    return 0;
}
