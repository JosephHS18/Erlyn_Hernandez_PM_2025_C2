#include <stdio.h>
int main(void) {
int N1, N2, i, j, es_primo, es_primo_sig;
printf("Ingrese el primer numero: ");
scanf("%d", &N1);
printf("Ingrese el segundo numero: ");
scanf("%d", &N2);
if (N1 > 0 && N2 > N1) {
printf("Primos gemelos entre %d y %d: ", N1, N2);
for (i = N1; i <= N2 - 2; i++) {
es_primo = 1;
es_primo_sig = 1;
for (j = 2; j <= i / 2; j++) {
if (i % j == 0) {
es_primo = 0;
break;
}
}
for (j = 2; j <= (i + 2) / 2; j++) {
if ((i + 2) % j == 0) {
es_primo_sig = 0;
break;
}
}
if (es_primo && es_primo_sig && i > 1 && i + 2 <= N2)
printf("(%d, %d) ", i, i + 2);
}
printf("\n");
} else
printf("Numeros invalidos\n");
return 0;
}
                            