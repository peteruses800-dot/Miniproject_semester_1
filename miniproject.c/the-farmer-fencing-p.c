#include <stdio.h>
int main(){
    int l , w , area, perimeter;
    printf("enter the value of length");
    scanf("%d",&l);
    printf("enter the value of width");
    scanf("%d",&w);

    area = l*w;
    perimeter = 2*(l+w);

    printf("Area=<%d>",area);
    printf("Perimeter = <%d>",perimeter);
    return 0;


}