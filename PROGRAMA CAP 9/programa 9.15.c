#include <stdio.h>
#include <ctype.h>

void minymay(FILE *ap1) {
char cad[50];
int i, mi = 0, ma = 0;
while (!feof(ap1)) {
if (fgets(cad, 50, ap1) != NULL) {
i = 0;
while (cad[i] != '\0') {
if (islower(cad[i]))
mi++;
else if (isupper(cad[i]))
ma++;
i++;
}
}
}
printf("\nNmero de letras minsculas: %d", mi);
printf("\nNmero de letras maysculas: %d", ma);
}

int main(void) {
FILE *ap = fopen("arc.txt", "r");
if (ap != NULL) {
minymay(ap);
fclose(ap);
} else
printf("No se puede abrir el archivo\n");
return 0;
}
        