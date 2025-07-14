#include <stdio.h>
#include <ctype.h>

int main(void) {
char p1;
printf("\nIngrese un caracter para analizar si es un dgito: ");
p1 = getchar();
if (isdigit(p1))
printf("%c es un dgito\n", p1);
else
printf("%c no es un dgito\n", p1);
fflush(stdin);
printf("\nIngrese un caracter para examinar si es una letra: ");
p1 = getchar();
if (isalpha(p1))
printf("%c es una letra\n", p1);
else
printf("%c no es una letra\n", p1);
fflush(stdin);
printf("\nIngrese un caracter para examinar si es una letra minscula: ");
p1 = getchar();
if (isalpha(p1)) {
if (islower(p1))
printf("%c es una letra minscula\n", p1);
else
printf("%c no es una letra minscula\n", p1);
} else
printf("%c no es una letra\n", p1);
return 0;
}
        