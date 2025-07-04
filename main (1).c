#include <stdio.h>

int main() {
    int t1, t2, t3;
    printf("Введіть три значення: ");
    scanf("%d %d %d", &t1, &t2, &t3);

    double rate = 1.0/t1 + 1.0/t2 + 1.0/t3;
    double time = 1.0 / rate;

    printf("Час, необхідний для з'їдання пирога: %.2lf годин\n", time);

    return 0;
}
