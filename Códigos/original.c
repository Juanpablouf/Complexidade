#include <stdio.h>

int x(int n) {
    if (n <= 1) return 1;
    return x(n - 1) + x(n - 2);
}

int main() {
    int n = 10;
    printf("Resultado: %d\n", x(n));
    return 0;
}
