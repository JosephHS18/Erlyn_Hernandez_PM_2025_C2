#include <stdio.h>
int main() {
float x, suma = 0, termino;
int n, i, fact;
printf("Ingrese el valor de x (en radianes): ");
scanf("%f", &x);
suma = x;
for (n = 1; n <= 5; n++) {
fact = 1;
for (i = 1; i <= 2 * n - 1; i++)
fact = fact * i;
termino = x;
for (i = 2; i <= 2 * n - 1; i++)
termino = termino * x;
if (n % 2 == 0)
termino = -termino / fact;
termino = termino / fact;
suma = suma + termino;
}
printf("Aproximacion de sen(%.2f) = %.6f\n", x, suma);
return 0;
}     