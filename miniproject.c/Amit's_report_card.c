#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n); 
    
    int marks[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]); 
    }
    
    int highest = marks[0];
    int lowest = marks[0];
    
    for (i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    
    printf("Highest = %d", highest);
    printf("Lowest = %d", lowest);
    
    return 0;
}