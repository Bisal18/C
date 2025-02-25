#include <stdio.h>

int main() {
    int a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    int n=(a>b) ? a : b;
    printf("\n bigger number is %d ",n);
    return 0;
}
