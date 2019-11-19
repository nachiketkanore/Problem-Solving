#include<stdio.h>
#include<math.h>

int main(){
    int array[5];
    for(int x=0;x<5;x++)
    scanf("%d",array[x]);
    int sum0=0,sum1=0,sum2=0,sum3=0,sum4=0;

    for(int x=1;x<5;x++)
    sum0+=array[x];

    for(int x=0;x!=1,x<5;x++){
    sum1+=array[x];
  }

    for(int x=0;x!=2,x<5;x++){

    sum2+=array[x];
  }

    for(int x=0;x!=3,x<5;x++){

    sum3+=array[x];
  }

    for(int x=0;x<4;x++)
    sum4+=array[x];

    if(sum0<sum1 && sum0<sum2 && sum0<sum3 && sum0<sum4)
    printf("%d ",sum0);
    if(sum1<sum0 && sum1<sum2 && sum1<sum3 && sum1<sum4)
    printf("%d ",sum0);
    if(sum2<sum1 && sum2<sum0 && sum2<sum3 && sum2<sum4)
    printf("%d ",sum0);
    if(sum3<sum1 && sum3<sum2 && sum3<sum0 && sum3<sum4)
    printf("%d ",sum0);
    if(sum4<sum1 && sum4<sum2 && sum4<sum3 && sum4<sum0)
    printf("%d ",sum0);

    if(sum0>sum1 && sum0>sum2 && sum0>sum3 && sum0>sum4)
    printf("%d",sum0);
    else if(sum1>sum0 && sum1>sum2 && sum1>sum3 && sum1>sum4)
    printf("%d",sum1);
    else if(sum2>sum1 && sum2>sum0 && sum2>sum3 && sum2>sum4)
    printf("%d",sum2);
    else if(sum3>sum1 && sum3>sum2 && sum3>sum0 && sum3>sum4)
    printf("%d",sum3);
    else if(sum4>sum1 && sum4>sum2 && sum4>sum3 && sum4>sum0)
    printf("%d",sum4);

    return 0;
}
