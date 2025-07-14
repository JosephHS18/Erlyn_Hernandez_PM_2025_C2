#include <stdio.h>
#include <math.h>

void parimp(int, int *, int *);

int main(void) {
int I, N, NUM, PAR = 0, IMP = 0;
printf("Ingresa el nmero de datos: ");
scanf("%d", &N);
for (I = 1; I <= N; I++) {
printf("Ingresa el nmero %d: ", I);
scanf("%d", &NUM);
parimp(NUM, &PAR, &IMP);
}
printf("\nNmero de pares: %d", PAR);
printf("\nNmero de impares: %d", IMP);
return 0;
}

void parimp(int NUM, int *P, int *I) {
int RES;
RES = pow(-1, NUM);
if (RES > 0)
*P += 1;
else if (RES < 0)
*I += 1;
}
    