#include <stdio.h>

int main() {
  char name, prod;
  int price, quant, x;
  
  printf("Hello! What is the first letter of your name?: ");
  scanf("%c", &name);

  printf("What is the product?: ");
  scanf(" %c", &prod);

  printf("How much does it cost?: ");
  scanf("%d", &price);

  printf("How many would you like?: ");
  scanf("%d", &quant);

  printf("%c", name);
  
  for (x = 1; x <= quant; x++){
  
    printf("%c %d", prod, price);
  }
  
  return 0;
}
