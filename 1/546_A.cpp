#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
    int cost,money,want;
    cin>>cost>>money>>want;
int totalcost=0;
    for(int i=1;i<=want;i++)
{
    totalcost+=cost*i;
}
if(totalcost<=money)
cout<<"0\n";
else
cout<<abs(totalcost - money)<<endl;
    return 0;
}
