#include <stdio.h>

int main(void) {
int I, N, NUM, SUM = 0;
printf("Ingrese el nmero de datos:\t");
scanf("%d", &N);
for (I = 1; I <= N; I++) {
printf("Ingrese el dato nmero %d:\t", I);
scanf("%d", &NUM);
if (NUM > 0)
SUM = SUM + NUM;
}
printf("\nLa suma de los nmeros positivos es: %d", SUM);
return 0;
}
        