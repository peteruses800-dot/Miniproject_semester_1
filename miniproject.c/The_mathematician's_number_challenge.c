#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

   printf("enter number :");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;   
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    // Even/Odd check
    if (n % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}
