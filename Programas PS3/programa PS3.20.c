#include <stdio.h>
#include <math.h>
int main(void) {
int T, P, R;
float expr;
printf("Valores de T, P, R que satisfacen 7*T^4 - 6*P^3 + 12*R^5 < 5850:\n");
for (T = 1; T <= 10; T++) {
for (P = 1; P <= 10; P++) {
for (R = 1; R <= 10; R++) {
expr = 7 * pow(T, 4) - 6 * pow(P, 3) + 12 * pow(R, 5);
if (expr < 5850)
printf("T=%d, P=%d, R=%d\n", T, P, R);
}
}
}
return 0;
}
                