#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
#define endl "\n"
using namespace std;
int main(){
    fastio tie
//    vector <int> v;
    //calculate and store lucky number below 1000
                                                                                    // for(int x=47;x<=774;x++){
                                                                                    // bool f=false;
                                                                                    // int y=x;
                                                                                    // int temp=y;
                                                                                    // while(y>0){
                                                                                    // int rem=y%10;
                                                                                    // if(rem==4 || rem==7){
                                                                                    // f=true;
                                                                                    // }
                                                                                    // else
                                                                                    // break;
                                                                                    // y/=10;
                                                                                    // }
                                                                                    // if(f)
                                                                                    // v.push_back(y);
                                                                                    //
                                                                                    // }
                                                                                    // cout<<v.size()<<endl;
//lucky numbers are 47 74 447 477 744 774
int n;
cin>>n;
if(n%47==0 ||n%74==0 ||n%447==0 ||n%477==0 ||n%744==0 ||n%774==0 ||n%4==0 ||n%7==0)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;



    return 0;
}
