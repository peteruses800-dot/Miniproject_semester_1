#include <stdio.h>
int main (){
    int n;
    printf("enter the number of days");
    scanf("%d", &n);
    int exercise_times[n];
    int i;
    printf("enter the exercise time in minute");
    for( i=0;i<n;i++)
    {
      
        scanf("%d",&exercise_times[i]);
    }
  
    printf("the reversed is \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",exercise_times[i]);

    }


    return 0;

}