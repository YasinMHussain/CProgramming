// C program to find the prime factors of a number 
//ADITYA GOGOI , ROLL NO -15
// 25-09-2024
#include <stdio.h>

int main() {
    int num, i, factor;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d: ", num);

    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    if (num > 1) {
        printf("%d", num);
    }

    printf("\n");

    return 0;
}
