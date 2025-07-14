#include <stdio.h>

int main(void) {
int I, MAT, MAMAT = 0, MEMAT = 0;
float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;
printf("Ingrese la matrcula del primer alumno:\t");
scanf("%d", &MAT);
while (MAT) {
SUM = 0;
for (I = 1; I <= 5; I++) {
printf("Ingrese la calificacin %d del alumno %d:\t", I, MAT);
scanf("%f", &CAL);
SUM += CAL;
}
PRO = SUM / 5;
printf("\nMatrcula: %d Promedio: %5.2f", MAT, PRO);
if (PRO > MAPRO) {
MAPRO = PRO;
MAMAT = MAT;
}
if (PRO < MEPRO) {
MEPRO = PRO;
MEMAT = MAT;
}
printf("\nIngrese la matrcula del siguiente alumno (0 para terminar):\t");
scanf("%d", &MAT);
}
printf("\n\nMatrcula del alumno con el mejor promedio: %d Promedio: %5.2f", MAMAT, MAPRO);
printf("\nMatrcula del alumno con el peor promedio: %d Promedio: %5.2f", MEMAT, MEPRO);
return 0;
}
                    