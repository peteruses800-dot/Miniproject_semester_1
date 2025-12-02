#include <stdio.h>
int main(){
    int celsius;
    printf("enter the  degree of temperature in celsius : ");
    scanf("%d", &celsius);
    int fahrenheit;
    
    fahrenheit = (celsius * 9 / 5)+32;

    
    printf("temperature in fahrenheit = %d",fahrenheit);
     return 0;

}
