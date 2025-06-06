#include <stdio.h>
#include <math.h>

int x_binet(int n) {
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

int main() {
    int n = 40;
    printf("Resultado: %d\n", x_binet(n));
    return 0;
}
