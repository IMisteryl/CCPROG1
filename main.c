#include <stdio.h>

int main() {
  char name, prod;
  int price, quant, x;
  
  printf("Hello! What is the first letter of your name?: \n");
  scanf("%c", &name);

  printf("What is the first letter of the product?: \n");
  scanf("%c", &prod);

  printf("How much does it cost?: \n");
  scanf("%d", &price);

  printf("How many would you like?: \n");
  scanf("%d", &quant);

  printf("%c", name);
  
  for (x = 1; x <= quant; x++){
  
    printf("%c %d", prod, price);
  }
  
  return 0;
}
