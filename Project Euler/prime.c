#include<stdio.h>
int main(){
  int prime[25];
  int x=0,t;
for(int x=2;x<=27;x++){
  for(int t=1;t<=x;t++)
  if(x%1==0 && x%t==0)
  printf("%d\n",x);

}

  return 0;
}
