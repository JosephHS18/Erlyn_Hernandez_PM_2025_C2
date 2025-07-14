#include <stdio.h>

int f1(int);

int main(void) {
int I, K = 4;
for (I = 1; I <= 3; I++) {
printf("\n\nValor de K antes de llamar a la funcin: %d", ++K);
printf("\nValor de K despus de llamar a la funcin: %d", f1(K));
}
return 0;
}

int f1(int R) {
R += R;
return (R);
}
    