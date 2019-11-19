#include<stdio.h>
#include<math.h>
long long int funcmax(int ,int ,int ,int ,int );
long long int funcmin(int ,int ,int ,int ,int );
int main(){
    long long int array[5];
    for(int x=0;x<5;x++)
    scanf("%lli",array[x]);
    int sum0=0,sum1=0,sum2=0,sum3=0,sum4=0;

    for(int x=1;x<5;x++)
    sum0+=array[x];
    for(int x=0;x<5;x++){
      if(x==1) continue;
    sum1+=array[x];
  }
    for(int x=0;x<5;x++){
      if(x==2) continue;
    sum2+=array[x];
  }
    for(int x=0;x<5;x++){
      if(x==3) continue;
    sum3+=array[x];
  }
    for(int x=0;x<4;x++)
    sum4+=array[x];

    long long int min=funcmin(sum0,sum1,sum2,sum3,sum4);
    long long int max=funcmax(sum0,sum1,sum2,sum3,sum4);

printf("%lli %lli",min,max);
    return 0;
}

 long long int funcmax(sum0,sum1,sum2,sum3,sum4){
     long int max;
    (sum0>sum1 && sum0>sum2 && sum0>sum3 && sum0>sum4)?:(max=sum0);
    (sum1>sum0 && sum1>sum2 && sum1>sum3 && sum1>sum4)?:(max=sum1);
    (sum2>sum1 && sum2>sum0 && sum2>sum3 && sum2>sum4)?:(max=sum2);
    (sum3>sum1 && sum3>sum2 && sum3>sum0 && sum3>sum4)?:(max=sum3);
    (sum4>sum1 && sum4>sum2 && sum4>sum3 && sum4>sum0)?:(max=sum4);
    return max;
    if(sum0==sum1==sum2==sum3==sum4)
    return 0;
 }

 long long int funcmin(sum0,sum1,sum2,sum3,sum4){
     long int min;
  (sum0<sum1 && sum0<sum2 && sum0<sum3 && sum0<sum4)?:(min= sum0);
  (sum1<sum0 && sum1<sum2 && sum1<sum3 && sum1<sum4)?:(min= sum1);
  (sum2<sum1 && sum2<sum0 && sum2<sum3 && sum2<sum4)?:(min= sum2);
  (sum3<sum1 && sum3<sum2 && sum3<sum0 && sum3<sum4)?:(min= sum3);
  (sum4<sum1 && sum4<sum2 && sum4<sum3 && sum4<sum0)?:(min= sum4);
  return min;
  if(sum0==sum1==sum2==sum3==sum4)
    return 0;
 }
