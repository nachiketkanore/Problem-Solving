#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  long scores[n];
  for(int x=0;x<n;x++)
  scanf("%l",&scores[x]);
  int hs=scores[0],ls=scores[0];
  for(int x=0;x<n;x++){
    if(hs<scores[x]){
      hs=scores[x];
      int counths++;
    }
    else if(ls>scores[x]){
      ls=scores[x];
      int countls++;
    }
  }
  printf("%d %d",counths,countls);
  return 0;
}
