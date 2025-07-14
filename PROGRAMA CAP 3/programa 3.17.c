#include <stdio.h>

int main(void) {
int I, J, NUM, SUM, C = 0;
printf("\nIngrese el nmero lmite: ");
scanf("%d", &NUM);
for (I = 1; I <= NUM; I++) {
SUM = 0;
for (J = 1; J <= I / 2; J++)
if (I % J == 0)
SUM += J;
if (SUM == I) {
printf("\n%d es un nmero perfecto", I);
C++;
}
}
printf("\nEntre 1 y %d hay %d nmeros perfectos", NUM, C);
return 0;
}
            