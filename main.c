#include <stdio.h>


int main (){
float fRadius, fArea;

printf("What is the radius of the circle?: ");
scanf("%f", &fRadius);

fArea = (fRadius * fRadius) * 3.1416;

printf("The area of the circle with radius %.0f cm. is %.2f sq. cm", fRadius, fArea);

    return 0;
}
