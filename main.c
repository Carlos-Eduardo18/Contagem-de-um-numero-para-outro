#include <stdio.h>
#include <stdlib.h>

int main() {
  int n1, n2;

  printf("Digite um número:");
  scanf("%d", &n1);

  printf("Digite outro número:");
  scanf("%d", &n2);

  for(int i = n1; i <= n2; i++){
    printf("%d\n", i);
  }
}