#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n); 
    
    int attendance[n];
    int present = 0, absent = 0;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &attendance[i]);  
        if (attendance[i] == 1) {
            present++;
        }
        else if(attendance[i]== 0){
            absent++;
        } else {
            printf("invalid input\n");
        }
    }
    
    printf("Present: %d\n", present);
    printf("Absent: %d\n", absent);

    
    return 0;
}