// #include<bits/stdc++.h>
// #define fastio ios_base::sync_with_stdio(false);
// #define tie cin.tie(NULL);
// using namespace std;
// int main(){
//     fastio tie
//     long long int n,m;
//     cin>>n>>m;
//     //m mod 2^n
//     if(m< (1<<n) ) cout<<m;
//     else
//     cout<<m % (1<<n) <<"\n";
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  printf("%d\n", n >= 31 ? m : m % (1 << n));
  return 0;
}
