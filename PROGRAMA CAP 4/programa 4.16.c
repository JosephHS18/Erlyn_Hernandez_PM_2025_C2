#include <stdio.h>

float TEM_TOTAL = 0, TEM_MAX = -1000, TEM_MIN = 1000;
int HORA_MAX, HORA_MIN;

void Acutem(float TEM) {
TEM_TOTAL += TEM;
}

void Maxima(float TEM, int HORA) {
if (TEM > TEM_MAX) {
TEM_MAX = TEM;
HORA_MAX = HORA;
}
}

void Minima(float TEM, int HORA) {
if (TEM < TEM_MIN) {
TEM_MIN = TEM;
HORA_MIN = HORA;
}
}

int main(void) {
float TEM;
int I;
for (I = 1; I <= 24; I++) {
printf("Ingresa la temperatura de la hora %d: ", I);
scanf("%f", &TEM);
Acutem(TEM);
Maxima(TEM, I);
Minima(TEM, I);
}
printf("\nPromedio del da: %.2f", TEM_TOTAL / 24);
printf("\nTemperatura mxima: %.2f en la hora %d", TEM_MAX, HORA_MAX);
printf("\nTemperatura mnima: %.2f en la hora %d", TEM_MIN, HORA_MIN);
return 0;
}
        