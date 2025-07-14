#include <stdio.h>
#include <ctype.h>

int main(void) {
char cad[50];
int i = 0, mi = 0, ma = 0;
printf("\nIngrese la cadena de caracteres (mximo 50 caracteres): ");
gets(cad);
while (cad[i] != '\0') {
if (islower(cad[i]))
mi++;
else if (isupper(cad[i]))
ma++;
i++;
}
printf("\n\nNmero de letras minsculas: %d", mi);
printf("\nNmero de letras maysculas: %d", ma);
return 0;
}
        