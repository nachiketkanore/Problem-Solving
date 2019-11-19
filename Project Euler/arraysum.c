#include <stdio.h>
int main() {
  int arraysize;
  scanf("%d", &arraysize);
  int array[arraysize];
  for(int x=0;x<arraysize;x++)
  scanf("%d",&array[x]);

  int sum = 0;
  for (int x = 0; x < arraysize; x++)
    sum += array[x];
  printf("%d", sum);
  return 0;
}
