#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    set<set<int>> a;

    while(n--){
        int x,y,z;  cin >> x >> y >> z;
        set<int> aa = {x,y,z};
        a.insert(aa);
    }

    cout << a.size() << endl;

    return 0;
}