#include <stdio.h>

int main() {
    int a,b;
    printf("enter the length and breadth of a rectangle in meter:");
    scanf("%d%d",&a,&b);
    printf("\n Area is %d * %d = %d m^2",a,b,a*b);
    return 0;
}
