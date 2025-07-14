#include <stdio.h>

int f1(void);
int f2(void);
int f3(void);
int f4(void);
int K = 3;

int main(void) {
int I;
for (I = 1; I <= 3; I++) {
printf("\nEl resultado de la funcin f1 es: %d", f1());
printf("\nEl resultado de la funcin f2 es: %d", f2());
printf("\nEl resultado de la funcin f3 es: %d", f3());
printf("\nEl resultado de la funcin f4 es: %d", f4());
}
return 0;
}

int f1(void) {
static int X = 0;
X++;
return X;
}

int f2(void) {
static int X = 0;
X += 2;
return X;
}

int f3(void) {
K++;
return K;
}

int f4(void) {
static int X = 0;
X += 3;
return X;
}
    