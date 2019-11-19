#include<stdio.h>
int main(){
  int testcases;
  long long int n,f1,f2,f,sum;
  scanf("%d",&testcases);
  for(long x=0;x<testcases;x++){
     scanf("%d",n);
  f1=1;f2=2;f=0,sum=0;
     while(f1 < n)
        {
            if(f1 % 2 == 0)
                sum += f1;

            {  f = f1 + f2;
               f1 = f2;
               f2 = f;   }
               
        }





    printf("%d",sum);
  }


  return 0;
}
