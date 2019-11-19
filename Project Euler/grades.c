#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int grades[n];
  for(int x=0;x<n;x++)
  scanf("%d",&grades[x]);
  for(int x=0;x<n;x++){
    if((((grades[x]/10)*10+5)-grades[x])<3 && grades[x]>38){
    grades[x]=(grades[x]/10)*10+5;
    printf("%d\n",grades[x]);}

    else if((((grades[x]/10)*10+5)-grades[x])>3 && grades[x]>=38)
    printf("%d\n",grades[x]);

    if((((grades[x]/10)*10+5)-grades[x])==3 && grades[x]>=38)
    printf("%d\n",grades[x]);

    if(grades[x]<38)
    printf("%d\n",grades[x]);
  }
  return 0;
}
