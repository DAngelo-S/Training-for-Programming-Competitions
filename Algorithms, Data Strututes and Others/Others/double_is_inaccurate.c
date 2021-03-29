#include <stdio.h>
#define MAX 80

int main() {
  int n, i;
  double conta1 = 0.0, conta2 = 0.0;
  char car1;
  char nome[MAX]; 

  printf("Digite n: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++)
    conta1 = conta1 + 1.0 / (double) i;

  for(i = n; i >= 1; i--)
    conta2 = conta2 + 1.0 / (double) i;

  printf("A diferença é %.20f\n", conta1 - conta2);

  for (car1 = 'A'; car1 <= 'Z'; car1++)
    printf("%c-%c\n", car1, car1 - 'A' + 'a');

  scanf(" %[^\n]", nome);
  printf ("%s", nome); 
  
  return 0;
}
