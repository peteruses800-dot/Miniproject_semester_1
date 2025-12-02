#include <stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);

    if(n%2 == 0)
          
    printf("even number",n);
    else

    printf("odd number",n);
    if(n%5 == 0)
    printf("  divisible by 5");
    else
    
    printf("  not divisible by 5");
    
    return 0;
}