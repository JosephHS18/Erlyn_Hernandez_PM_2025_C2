#include <stdio.h>
int main() {
int N, i, j, k;
printf("Ingrese N: ");
scanf("%d", &N);
if (N > 0) {
for (i = N; i >= 1; i--) {
for (j = 1; j <= i; j++) {
printf("%d ", j);
}
for (k = 1; k <= 2 * (N - i); k++) {
printf("  ");
}
for (j = i; j >= 1; j--) {
printf("%d ", j);
}
printf("\n");
}
} else
printf("Numero invalido\n");
return 0;
}
                        