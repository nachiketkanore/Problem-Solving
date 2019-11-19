#include<bits/stdc++.h>
using namespace std;

string solve(string &s){
    int n = s.size();
    int freq[10] = {0};

    for(auto x: s) freq[x-'0']++;

    deque<int> ans;
    int oddCount = 0;
    for(int x=0;x<10;x++) oddCount += (freq[x] & 1);

    if(oddCount > 1) return "NOT POSSIBLE";

    for(int x=0;x<10;x++){
        if(freq[x] & 1){
            while(freq[x]--) ans.push_back(x);
        }
    }

    for(int x=0;x<10;x++){
        int num = x , f = freq[x];
        if(f & 1) continue;
        while(f > 0)
            ans.push_back(num) , ans.push_front(num) , f-=2;
        freq[x] = 0;
    }

    auto x = ans.begin();
    string ANS = "";
    for( ; x!= ans.end() ;x++) 
        ANS.push_back(*x + '0') ;

        return ANS;
}

int main(){
    string s;   cin >> s;
    cout << solve(s) << endl;

    return 0;
}