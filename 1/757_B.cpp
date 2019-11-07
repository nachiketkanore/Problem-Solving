// Author : Nachiket Kanore
// Institute : PICT, Pune

#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N = 1e5+100;
int n;
unordered_map<int,int> f;
int ans = 1;
int taken[N+20];

int32_t main(){

	cin >> n;
	int mx = 0;
	for(int x=0;x<n;x++){
		int t;	cin >> t;
		f[t]++;
		mx = max(mx , t);
	}

	

	for(int x=2;x<=N;x++){

		if(x > mx)	break;

		if(!taken[x]){

			//cout << x << " ## " << endl;
			int cnt = 0;

			for(int y=x;y<=N;y+=x)
				cnt += f[y] , taken[y] = 1;

			taken[x] = 1;
			ans = max(ans , cnt);


		}


	}

	cout << ans << endl;

    return 0;
}