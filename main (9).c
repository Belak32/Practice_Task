#include <stdio.h>
#include <string.h>
#include <ctype.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    char word[15]; 
    int freq[256] = {0};

    printf("Введіть слово: ");
    scanf("%s", word);

    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        word[i] = toupper(word[i]);  
        freq[(unsigned char)word[i]]++;
    }

    long long total = factorial(len);
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1)
            total /= factorial(freq[i]);
    }

    printf("Кількість анаграм: %lld\n", total);
    return 0;
}
