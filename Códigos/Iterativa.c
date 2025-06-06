#include <stdio.h>

int x_iter(int n) {
    if (n <= 1) return 1;
    int a = 1, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n = 40;
    printf("Resultado: %d\n", x_iter(n));
    return 0;
}
