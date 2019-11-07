#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
using namespace std;
int main(){
    fast;
        long int n; cin>>n;
        long int sum {0};
        while(n--){
            string s; cin>>s;
            if(s=="Tetrahedron") sum+= 4;
            else if(s=="Cube") sum+= 6;
            else if(s=="Octahedron") sum+= 8;
            else if(s=="Dodecahedron") sum+= 12;
            else if(s=="Icosahedron") sum+= 20;
        }
        cout<<sum<<endl;
    return 0;
}
