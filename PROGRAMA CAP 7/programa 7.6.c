#include <stdio.h>
#include <string.h>

int main(void) {
char cad0[20] = "Hola Mxico";
char cad1[20], cad2[20], cad3[20] = ", buenos das!!!";
strcpy(cad1, cad0);
printf("\nPrueba de la funcin strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);
strcpy(cad1, cad3);
printf("\nPrueba de la funcin strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);
strcpy(cad1, "XX");
printf("\nPrueba de la funcin strcpy. Se copia la cadena XX a cad1: %s\n", cad1);
strncpy(cad2, cad0, 4);
cad2[4] = '\0';
printf("\nPrueba de la funcin strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2);
strcat(cad0, cad3);
printf("\nPrueba de la funcin strcat. Se concatena la cadena cad3 a cad0: %s\n", cad0);
strcat(cad1, " YY");
printf("\nPrueba de la funcin strcat. Se concatena la cadena ' YY' a cad1: %s\n", cad1);
char cad2_mod[20] = "Hola";
strcat(cad2_mod, " ");
printf("\nPrueba de la funcin strcat. Se concatena ' ' a cad2_mod: %s\n", cad2_mod);
char cad2_ncat[20] = "Hola ";
char cad0_copy[20] = "Hola Mxico";
strncat(cad2_ncat, cad0_copy, 4);
printf("\nPrueba de la funcin strncat. Se concatenan 4 caracteres de cad0 a cad2_ncat: %s\n", cad2_ncat);
char cad0_search[20] = "Hola Mxico";
char *result_search = strstr(cad0_search, "Mxico");
if (result_search != NULL)
printf("\nPrueba de la funcin strstr. Se localiza la cadena Mxico dentro de cad0_search: %s\n", result_search);
else
printf("\nPrueba de la funcin strstr. La cadena Mxico no se encontr en cad0_search.\n");
result_search = strstr(cad0_search, "Guatemala");
if (result_search != NULL)
printf("\nPrueba de la funcin strstr. Se localiza la cadena Guatemala dentro de cad0_search: %s\n", result_search);
else
printf("\nPrueba de la funcin strstr. La cadena Guatemala no se encontr en cad0_search.\n");
return 0;
}
    