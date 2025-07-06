#include <stdio.h>
#include <math.h>


int minSteps(int x, int y) {
    int dist = y - x;
    int step = 1;
    int total = 0;

    while (1) {
        total += step;
        if (total >= dist) break;

       
        if (step * (step + 1) / 2 >= (dist + 1) / 2)
            step--;
        else
            step++;
    }

    return step * 2 - (total - dist >= step ? 1 : 0);
}

int main() {
    int x, y;
    printf("Введіть x і y: ");
    scanf("%d %d", &x, &y);

    printf("Мінімальна кількість кроків: %d\n", minSteps(x, y));
    return 0;
}

