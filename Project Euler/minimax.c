#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  long n, k;
  scanf("%l",&n);
  scanf("%l",&k);
  long array[n];
  int count = 0;
  for (int x = 0; x < n; x++)
    scanf("%l", &array[x]);
  for (int x = 0; x < n; x++) {
    int initial = array[x];
    for (int y = 0; y < n; y++) {
      if ((initial - array[y]) == k)
        count++;
    }
  }
  printf("%d", count);
  return 0;
}
