#include <stdio.h>
#include <string.h>
#include <ctype.h>

void minymay(char *cadena);

int main(void) {
int i, n;
char FRA[20][50];
printf("\nIngrese el nmero de filas del arreglo: ");
scanf("%d", &n);
if (n > 20 || n < 1) {
printf("Nmero de filas invlido. Debe estar entre 1 y 20.\n");
return 1;
}
for (i = 0; i < n; i++) {
printf("Ingrese la lnea %d de texto: ", i + 1);
fflush(stdin);
gets(FRA[i]);
}
printf("\n\n");
for (i = 0; i < n; i++)
minymay(FRA[i]);
return 0;
}

void minymay(char *cadena) {
int i = 0, mi = 0, ma = 0;
while (cadena[i] != '\0') {
if (islower(cadena[i]))
mi++;
else if (isupper(cadena[i]))
ma++;
i++;
}
printf("\n\nNmero de letras minsculas: %d", mi);
printf("\nNmero de letras maysculas: %d", ma);
}
    