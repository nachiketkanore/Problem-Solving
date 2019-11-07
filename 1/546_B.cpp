#include <bits/stdc++.h>
using namespace std;
int main(){

  int n;cin>>n;
  int a[n];
  for(int x=0;x<n;x++) cin>>a[x] ;

  sort(a,a+n);
  int ans = 0;


  set<int> factors;
  for(int x =0;x<n;x++){
      int final = a[x];

      while(factors.count(final)){
        ans++;
        final++;
      }

    factors.insert(final);

  }

  cout<<ans<<endl;


  return 0;
}