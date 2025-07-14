#include <stdio.h>
#include <ctype.h>

int main(void) {
char p, cad[50];
int n;
printf("\nIngrese la cadena de caracteres (mximo 50): ");
gets(cad);
printf("\nIngrese la posicin en la cadena que desea verificar: ");
scanf("%d", &n);
if (n >= 1 && n <= 50) {
p = cad[n - 1];
if (islower(p))
printf("\n%c es una letra minscula", p);
else
printf("\n%c no es una letra minscula", p);
} else
printf("\nEl valor ingresado de n es incorrecto");
return 0;
}
        