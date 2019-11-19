#include<stdio.h>
int main(){
  long int a,b;
     scanf("%d",&a);
     scanf("%d",&b);
    static const char* array[9]={'one','two','three','four','five','six','seven','eight','nine'};
    for(int x=0;x<9;x++){
     if(a==x)
     printf("%s\n",array[x-1]);
     else if(a>9)
     printf("%s\n",array[8]);
     if(b==x)
     printf("%s\n",array[x-1]);
     else if(b>9)
     printf("%s\n",array[8]);
   }
  return 0;
}
