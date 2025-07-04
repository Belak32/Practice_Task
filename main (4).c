#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);


 
    long long dp0 = 2;  
    long long dp1 = 0;

    for (int i = 2; i <= p; i++) {
        long long new_dp1 = dp0;         
        long long new_dp0 = (dp0 + dp1) * 1;  
        dp0 = new_dp0 * 1;
        dp1 = new_dp1 * 1;
    }

    printf("%lld\n", dp0 + dp1);
    return 0;
}

