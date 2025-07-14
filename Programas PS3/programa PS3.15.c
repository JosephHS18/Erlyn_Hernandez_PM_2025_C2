#include <stdio.h>
int main(void) {
int N1, N2, a, b, r;
printf("Ingrese el primer numero: ");
scanf("%d", &N1);
printf("Ingrese el segundo numero: ");
scanf("%d", &N2);
if (N1 > 0 && N2 > 0) {
a = N1;
b = N2;
while (b != 0) {
r = a % b;
a = b;
b = r;
}
printf("El MCD de %d y %d es: %d\n", N1, N2, a);
} else
printf("Numeros invalidos\n");
return 0;
}
            