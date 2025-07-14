#include <stdio.h>
#include <ctype.h>

void minymay(FILE *arc) {
int min = 0, may = 0;
char p;
while (!feof(arc)) {
p = fgetc(arc);
if (islower(p))
min++;
else if (isupper(p))
may++;
}
printf("\nNmero de minsculas: %d", min);
printf("\nNmero de maysculas: %d", may);
}

int main(void) {
FILE *ar = fopen("arc5.txt", "r");
if (ar != NULL) {
minymay(ar);
fclose(ar);
} else
printf("No se pudo abrir el archivo\n");
return 0;
}
        