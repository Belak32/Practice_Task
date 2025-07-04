#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Введіть n (1 < n < 150): ");
    scanf("%d", &n);

    for (int m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }

    printf("Кількість рівних дільників: %d\n", count);
    return 0;
}
