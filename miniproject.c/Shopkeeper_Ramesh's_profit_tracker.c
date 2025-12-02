#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);  
    
    int records[n];
    int totalProfit = 0, totalLoss = 0;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &records[i]);  
        if (records[i] > 0) {
            totalProfit += records[i];
        } else if (records[i] < 0) {
            totalLoss += (-records[i]);  
        }
    }
    
    int netBalance = totalProfit - totalLoss;
    
    printf("Total Profit: %d\n", totalProfit);
    printf("Total Loss: %d\n", totalLoss);
    printf("Net Balance: %d\n", netBalance);
    
    return 0;
}