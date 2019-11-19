#include<stdio.h>
int main(){
  int a[3],b[3];
  for(int x=0;x<3;x++)
  scanf("%d",&a[x]);
  for(int x=0;x<3;x++)
  scanf("%d",&b[x]);
  int alicescore=0,bobscore=0;
  for(int x=0;x<3;x++){
   if(a[x]>b[x])
   alicescore++;
   else
   bobscore++;
 }
 printf("%d %d",alicescore,bobscore);
  return 0;
}
