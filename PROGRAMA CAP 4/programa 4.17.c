#include <stdio.h>

void Mayor(float, float, float);

float AGOL = 0, APAC = 0, ACAR = 0;

int main(void) {
int I;
float GOL, PAC, CAR;
for (I = 1; I <= 12; I++) {
printf("\n\nIngresa las lluvias del mes %d", I);
printf("\nRegiones Golfo, Pacfico y Caribe: ");
scanf("%f %f %f", &GOL, &PAC, &CAR);
AGOL += GOL;
APAC += PAC;
ACAR += CAR;
}
printf("\nPromedio Golfo: %.2f", AGOL / 12);
printf("\nPromedio Pacfico: %.2f", APAC / 12);
printf("\nPromedio Caribe: %.2f", ACAR / 12);
Mayor(AGOL / 12, APAC / 12, ACAR / 12);
return 0;
}

void Mayor(float G, float P, float C) {
if (G > P && G > C)
printf("\nRegin con mayor promedio: Golfo");
else if (P > G && P > C)
printf("\nRegin con mayor promedio: Pacfico");
else
printf("\nRegin con mayor promedio: Caribe");
}
    