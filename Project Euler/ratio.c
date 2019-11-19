#include<stdio.h>
int main(){
   int arraysize;
   float countzero=0,countpositive=0,countnegative=0;
   scanf("%d",&arraysize);
   int array[arraysize];
   for(int x=0;x<arraysize;x++)
   scanf("%d",&array[x]);

   for(int x=0;x<arraysize;x++){
     if(array[x]==0)
     countzero+=1;
     else if(array[x]>0)
     countpositive+=1;
     else
     countnegative+=1;
   }

  printf("%f\n",countpositive/arraysize);
  printf("%f\n",countnegative/arraysize);
  printf("%f\n",countzero/arraysize);

  return 0;
}
