#include <stdio.h>
int main(void) {
int NUM, i, j, es_primo;
printf("Ingrese un numero positivo: ");
scanf("%d", &NUM);
if (NUM > 1) {
printf("Numeros primos menores a %d: ", NUM);
for (i = 2; i < NUM; i++) {
es_primo = 1;
for (j = 2; j <= i / 2; j++) {
if (i % j == 0) {
es_primo = 0;
break;
}
}
if (es_primo)
printf("%d ", i);
}
printf("\n");
} else
printf("Numero invalido\n");
return 0;
}
                    