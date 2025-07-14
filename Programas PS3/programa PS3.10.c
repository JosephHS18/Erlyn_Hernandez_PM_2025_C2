#include <stdio.h>
int main(void) {
float L1, L2, L3, L4, L5, L6, monto_venta, total = 0;
int CLA, CAN, boletos1 = 0, boletos2 = 0, boletos3 = 0, boletos4 = 0, boletos5 = 0, boletos6 = 0;
printf("Ingrese precio de localidad 1: ");
scanf("%f", &L1);
printf("Ingrese precio de localidad 2: ");
scanf("%f", &L2);
printf("Ingrese precio de localidad 3: ");
scanf("%f", &L3);
printf("Ingrese precio de localidad 4: ");
scanf("%f", &L4);
printf("Ingrese precio de localidad 5: ");
scanf("%f", &L5);
printf("Ingrese precio de localidad 6: ");
scanf("%f", &L6);
printf("Ingrese tipo de localidad (1-6, 0 para terminar): ");
scanf("%d", &CLA);
printf("Ingrese cantidad de boletos: ");
scanf("%d", &CAN);
while (CLA != 0 || CAN != 0) {
if (CLA >= 1 && CLA <= 6 && CAN >= 0) {
if (CLA == 1) {
monto_venta = CAN * L1;
boletos1 += CAN;
} else if (CLA == 2) {
monto_venta = CAN * L2;
boletos2 += CAN;
} else if (CLA == 3) {
monto_venta = CAN * L3;
boletos3 += CAN;
} else if (CLA == 4) {
monto_venta = CAN * L4;
boletos4 += CAN;
} else if (CLA == 5) {
monto_venta = CAN * L5;
boletos5 += CAN;
} else {
monto_venta = CAN * L6;
boletos6 += CAN;
}
printf("Monto de la venta: %.2f\n", monto_venta);
total += monto_venta;
} else
printf("Datos invalidos\n");
printf("Ingrese tipo de localidad (1-6, 0 para terminar): ");
scanf("%d", &CLA);
printf("Ingrese cantidad de boletos: ");
scanf("%d", &CAN);
}
printf("Boletos localidad 1: %d\n", boletos1);
printf("Boletos localidad 2: %d\n", boletos2);
printf("Boletos localidad 3: %d\n", boletos3);
printf("Boletos localidad 4: %d\n", boletos4);
printf("Boletos localidad 5: %d\n", boletos5);
printf("Boletos localidad 6: %d\n", boletos6);
printf("Recaudacion total: %.2f\n", total);
return 0;
}
                                    