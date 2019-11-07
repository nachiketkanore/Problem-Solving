// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;

unordered_map<int,int> open;
unordered_map<int,int> close;
vector<pair<int,int>> both;

int ans = 0;
int mx;
int bal;

int32_t main(){

	int n;	cin >> n;
	for(int x=0;x<n;x++){
		string s;	cin >> s;
		string t;
		
		mx = max(mx,(int) s.size());

		for(int i=0;i<s.size();i++){
			if(s[i] == '(')
				t.push_back(s[i]);
			else{
				if(t.empty())
					t.push_back(s[i]);
				else{
					if(t.back() == '(')
						t.pop_back();
					else
						t.push_back(s[i]);
				}
			}
		}

		if(t.empty()){
			//cout << "BALANCED" << endl;
			bal++ ; continue;
		}

		//cout << t << endl;

		if(t.back() == t.front()){
			int len = t.size();
			if(t[0] == '(')
				open[len]++;
			else 
				close[len]++;
		}else{

			int op = 0 , cls = 0;

			for(auto &ch : t)	op += (ch == '(') , cls += (ch == ')');
			pair<int,int> f = {cls , op};
			both.push_back(f);

		}

	}

	ans += bal/2;

	for(int x=1;x<=mx+8;x++){
		int len = x;
		int cnt_open = open[len];
		int cnt_close = close[len];
		int get = min(cnt_open , cnt_close);
		ans += get;
		open[len] -= get , close[len] -= get;
	}

	// for(auto &it : both){

	// 	if(open[it.first] > 0 and close[it.second] > 0){
	// 		ans++;
	// 		open[it.first]-- , close[it.second]--;
	// 		//cout << "here" << endl;
	// 	}

	// }


	cout << ans << endl;



    return 0;
}