#include <stdio.h>

const int MES = 12;
const int DEP = 3;
const int AO = 8;

void Lectura(float[][DEP][AO], int, int, int);
void Funcion1(float[][DEP][AO], int, int, int);
void Funcion2(float[][DEP][AO], int, int, int);
void Funcion3(float[][DEP][AO], int, int, int);

int main(void) {
float PRO[MES][DEP][AO];
Lectura(PRO, MES, DEP, AO);
Funcion1(PRO, MES, DEP, 2);
Funcion2(PRO, MES, DEP, AO);
Funcion3(PRO, MES, DEP, AO);
return 0;
}

void Lectura(float A[][DEP][AO], int F, int C, int P) {
int K, I, J;
for (K = 0; K < P; K++)
for (I = 0; I < F; I++)
for (J = 0; J < C; J++) {
printf("Ao: %d\tMes: %d\tDepartamento: %d: ", K + 1, I + 1, J + 1);
scanf("%f", &A[I][J][K]);
}
}

void Funcion1(float A[][DEP][AO], int F, int C, int P) {
int I, J;
float SUM = 0.0;
for (I = 0; I < F; I++)
for (J = 0; J < C; J++)
SUM += A[I][J][P - 1];
printf("\n\nVentas totales de la empresa en el segundo ao: %.2f", SUM);
}

void Funcion2(float A[][DEP][AO], int F, int C, int P) {
int I, J;
float SUM1 = 0, SUM2 = 0, SUM3 = 0;
for (I = 0; I < F; I++) {
SUM1 += A[I][0][P - 1];
SUM2 += A[I][1][P - 1];
SUM3 += A[I][2][P - 1];
}
if (SUM1 > SUM2 && SUM1 > SUM3)
printf("\n\nDepartamento con mayores ventas en el ltimo ao: Hilos. Importe: %.2f", SUM1);
else if (SUM2 > SUM3)
printf("\n\nDepartamento con mayores ventas en el ltimo ao: Lanas. Importe: %.2f", SUM2);
else
printf("\n\nDepartamento con mayores ventas en el ltimo ao: Licra. Importe: %.2f", SUM3);
}

void Funcion3(float A[][DEP][AO], int F, int C, int P) {
int I, J, K, D = 0, M = 0, AO_MAY = 0;
float VMAY = 0.0;
for (K = 0; K < P; K++)
for (I = 0; I < F; I++)
for (J = 0; J < C; J++)
if (A[I][J][K] > VMAY) {
VMAY = A[I][J][K];
D = J;
M = I;
AO_MAY = K;
}
printf("\n\nDepartamento, mes y ao con mayores ventas: Departamento %d\tMes %d\tAo %d\tVentas %.2f", D + 1, M + 1, AO_MAY + 1, VMAY);
}
        