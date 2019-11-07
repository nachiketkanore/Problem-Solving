#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int skill[n];

  for(int x=0;x<n;x++)
  cin>>skill[x];

  int ans=0;
  sort(skill,skill+n);
  for(int x=0;x<n-1;x+=2){
    ans+=skill[x+1]-skill[x];
  }
  cout<<ans;
  return 0;
}
