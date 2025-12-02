#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;
    
    scanf("%d", &n); // Read number of students
    
    int marks[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]); // Read marks for each student
        sum += marks[i]; // Calculate total
    }
    
    average = (float)sum / n; // Calculate average
    
    printf("Total Marks = %d", sum);
    printf("Average Marks = %.2f", average);
    
    return 0;
}