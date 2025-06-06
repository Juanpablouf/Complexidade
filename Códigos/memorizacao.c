#include <stdio.h>
#include <string.h>

int memo[1000];

int x_memo(int n) {
    if (n <= 1) return 1;
    if (memo[n] != -1) return memo[n];
    memo[n] = x_memo(n - 1) + x_memo(n - 2);
    return memo[n];
}

int main() {
    int n = 40;
    memset(memo, -1, sizeof(memo));
    printf("Resultado: %d\n", x_memo(n));
    return 0;
}
