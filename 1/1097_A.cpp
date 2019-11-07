
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
  string table_card;
  getline(cin,table_card);
  string hand_card;
  getline(cin,hand_card);
if((table_card[0]==hand_card[0] || table_card[0]==hand_card[3] ||
   table_card[0]==hand_card[6] || table_card[0]==hand_card[9]
   || table_card[0]==hand_card[12])        ||       (table_card[1]==hand_card[1] || table_card[1]==hand_card[4] ||
      table_card[1]==hand_card[7] || table_card[1]==hand_card[10]
      || table_card[1]==hand_card[13])  )
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

  return 0;
}
