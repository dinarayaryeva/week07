#include <stdio.h>
#include <stdlib.h>

int main () {

  int n;
  printf("Please, print the size of the array:\n");
  scanf("%d", &n);

  int* p = malloc(n*sizeof(int));

  for (int i=0; i<n; i++){
    p[i] = i;
  }

  printf("Array:\n");

  for (int i=0; i<n; i++){
    printf("%d ", p[i]);
  }

  free(p);

  return (0) ;
}