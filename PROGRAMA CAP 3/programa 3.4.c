#include <stdio.h>
#include <math.h>

int main(void) {
int NUM;
long CUA, SUC = 0;
printf("\nIngrese un nmero entero -0 para terminar-:\t");
scanf("%d", &NUM);
while (NUM) {
CUA = pow(NUM, 2);
printf("%d al cuadrado es %ld\n", NUM, CUA);
SUC = SUC + CUA;
printf("Ingrese un nmero entero -0 para terminar-:\t");
scanf("%d", &NUM);
}
printf("\nLa suma de los cuadrados es %ld", SUC);
return 0;
}
        