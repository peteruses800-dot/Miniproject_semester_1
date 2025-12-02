#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);  
    
    int readings[n];
    int positive = 0, negative = 0, zero = 0;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &readings[i]);  
        if (readings[i] > 0) {
            positive++;
        } else if (readings[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    
    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);
    
    return 0;
}