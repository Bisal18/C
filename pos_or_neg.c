#include <stdio.h>
#include <string.h> // Include the string.h header for strcpy

int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);

    // Using strcpy to assign string literals to the array
    char n[4];  // This should be large enough to store the string ("+ve" or "-ve")
    
    // Ternary operator to check if the number is positive or negative
    strcpy(n, (a > 0) ? "+ve" : "-ve");

    printf("\nThe number is %s\n", n);
    return 0;
}
