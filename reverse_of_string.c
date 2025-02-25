#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    // Reversing the string by swapping characters
    while (start < end) {
        // Swap characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the pointers
        start++;
        end--;
    }
}

int main() {
    char str[100];

    // Getting user input for the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets input (if present)
    str[strcspn(str, "\n")] = '\0';

    // Display the original string
    printf("Original string: %s\n", str);

    // Call function to reverse the string
    reverseString(str);

    // Display the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
