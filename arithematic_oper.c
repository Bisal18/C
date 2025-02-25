#include <stdio.h>

int main() {
    int a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    printf("\n %d + %d = %d",a,b,a+b);
    printf("\n %d - %d = %d",a,b,a-b);
    printf("\n %d * %d = %d",a,b,a*b);
    printf("\n %d / %d = %d",a,b,a/b);
    printf("\n %d %% %d = %d",a,b,a%b);
    printf("\n avg of %d and %d is %f",a,b,(float)((a+b)/2));
    return 0;
}
