#include<bits/stdc++.h>
#define int long long
using namespace std;

const int inf = 1e18;

void solve(){

    int n , k ,d;   cin >> n >> k >> d;
    int a[n+2];   for(int x=1;x<=n;x++)    cin >> a[x];

    int ans = inf;


    set<int> f;

    map<int,int> freq;

    for(int x=1;x<=d;x++){
        f.insert(a[x]);
        freq[a[x]]++;
    }

    ans = min(ans , (int) freq.size());

    int l = 1 , r = d+1;

    while(r <= n){

            int fi = a[l];
            int se = a[r];

            if(freq[fi] == 1){
                freq[fi] = 0;
                auto it = f.find(fi);
                if(it != f.end())
                    f.erase(it);
            }else{
                if(freq[fi] > 1)
                    freq[fi]--;
            }

            freq[se]++;
            f.insert(se);



        r++ ,l++;        

        ans = min(ans, (int) f.size());


    }


    ans = min(ans, (int) f.size());

    cout << ans << endl;



}


int32_t main(){

    int t;  cin >> t;
    while(t--){

    //cout << "#####" << endl;

        solve();


    //cout << "#####" << endl;
    }


    return 0;
}