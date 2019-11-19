#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long testcases,belowthis,n;
    scanf("%d",&testcases);
    for(int n=1;n<=belowthis;n++){
        if(n==belowthis)
            break;}
    int fibo[n]={0, };
    fibo[0]=1;fibo[1]=2;
    for(int index=2;index<n;index++)
        fibo[index]=fibo[index-1] + fibo[index-2];
        for(int index=0;index<n;index++)
        printf("%d",fibo[index]);


    for(int i = 0; i < testcases; i++){

    }
    return 0;
}
