#include <stdio.h>
#include <string.h>

void intercambia(char FRA[][50], int);

int main(void) {
int i, n;
char FRA[20][50];
printf("\nIngrese el nmero de filas del arreglo: ");
scanf("%d", &n);
if (n <= 0 || n > 20) {
printf("Nmero de filas invlido. Debe ser entre 1 y 20.\n");
return 1;
}
for (i = 0; i < n; i++) {
printf("Ingrese la lnea de texto nmero %d: ", i + 1);
fflush(stdin);
gets(FRA[i]);
}
printf("\n\n");
intercambia(FRA, n);
for (i = 0; i < n; i++) {
printf("Impresin de la lnea de texto %d: ", i + 1);
puts(FRA[i]);
}
return 0;
}

void intercambia(char FRA[][50], int n) {
int i, j;
j = n - 1;
char cad[50];
for (i = 0; i < n / 2; i++) {
strcpy(cad, FRA[i]);
strcpy(FRA[i], FRA[j]);
strcpy(FRA[j], cad);
j--;
}
}
        