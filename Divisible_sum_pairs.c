#include <stdio.h>


int main() {
  int n, k;
  int count = 0;
  scanf("%d %d", &n, &k);
  int ar[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &ar[i]);
    for (int j = 0; j < i; j++)
  if ((ar[i] + ar[j]) % k == 0)
  {
      count++;
  } 
  }
  printf("%d", count);
  return 0;
}