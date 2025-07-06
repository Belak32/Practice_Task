#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int dx = x2 - x1;
    int dy = y2 - y1;
    double dist = sqrt(dx * dx + dy * dy);

    if (dist == 0 && r1 == r2) {
        printf("-1\n"); 
    } else if (dist > r1 + r2 || dist < fabs(r1 - r2)) {
        printf("0\n"); 
    } else if (fabs(dist - (r1 + r2)) < 1e-6 || fabs(dist - fabs(r1 - r2)) < 1e-6) {
        printf("1\n"); 
    } else {
        printf("2\n"); 
    }

    return 0;
}
