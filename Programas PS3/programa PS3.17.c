#include <stdio.h>
int main() {
int N, i, j;
printf("Ingrese un numero entero positivo (N): ");
scanf("%d", &N);
if (N > 0) {
for (i = 1; i <= N; i++) {
for (j = 1; j <= i; j++) {
printf("%d ", j);
}
for (j = i - 1; j >= 1; j--) {
printf("%d ", j);
}
printf("\n");
}
} else
printf("Numero invalido\n");
return 0;
}
                    