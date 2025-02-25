#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Sample characters for demonstration
    char chars[] = {'a', 'A', '1', ' ', '#', 'z', 'Z', '9', 'b'};

    printf("Demonstrating functions of ctype.h:\n\n");

    // Loop through each character in chars array
    for (int i = 0; chars[i] != '\0'; i++) {
        ch = chars[i];
        printf("Character: '%c' (ASCII: %d)\n", ch, ch);

        // isalpha: Checks if the character is alphabetic
        if (isalpha(ch)) {
            printf("isalpha: %d (Character is alphabetic)\n", isalpha(ch));
        } else {
            printf("isalpha: %d (Character is not alphabetic)\n", isalpha(ch));
        }

        // isdigit: Checks if the character is a digit
        if (isdigit(ch)) {
            printf("isdigit: %d (Character is a digit)\n", isdigit(ch));
        } else {
            printf("isdigit: %d (Character is not a digit)\n", isdigit(ch));
        }

        // isspace: Checks if the character is a whitespace character
        if (isspace(ch)) {
            printf("isspace: %d (Character is a whitespace)\n", isspace(ch));
        } else {
            printf("isspace: %d (Character is not a whitespace)\n", isspace(ch));
        }

        // islower: Checks if the character is lowercase
        if (islower(ch)) {
            printf("islower: %d (Character is lowercase)\n", islower(ch));
        } else {
            printf("islower: %d (Character is not lowercase)\n", islower(ch));
        }

        // isupper: Checks if the character is uppercase
        if (isupper(ch)) {
            printf("isupper: %d (Character is uppercase)\n", isupper(ch));
        } else {
            printf("isupper: %d (Character is not uppercase)\n", isupper(ch));
        }

        // ispunct: Checks if the character is a punctuation character
        if (ispunct(ch)) {
            printf("ispunct: %d (Character is punctuation)\n", ispunct(ch));
        } else {
            printf("ispunct: %d (Character is not punctuation)\n", ispunct(ch));
        }

        // isxdigit: Checks if the character is a hexadecimal digit
        if (isxdigit(ch)) {
            printf("isxdigit: %d (Character is a hexadecimal digit)\n", isxdigit(ch));
        } else {
            printf("isxdigit: %d (Character is not a hexadecimal digit)\n", isxdigit(ch));
        }

        // toupper: Converts character to uppercase
        printf("toupper: '%c' -> '%c'\n", ch, toupper(ch));

        // tolower: Converts character to lowercase
        printf("tolower: '%c' -> '%c'\n", ch, tolower(ch));

        printf("\n");
    }

    return 0;
}


/*
The program demonstrates a variety of ctype.h functions, which include:

isalpha(c): Checks if the character c is an alphabetic letter.
isdigit(c): Checks if the character c is a digit.
isspace(c): Checks if the character c is a whitespace (space, tab, newline).
islower(c): Checks if the character c is a lowercase letter.
isupper(c): Checks if the character c is an uppercase letter.
ispunct(c): Checks if the character c is a punctuation character.
isxdigit(c): Checks if the character c is a hexadecimal digit (0-9, a-f, A-F).
toupper(c): Converts the character c to uppercase.
tolower(c): Converts the character c to lowercase.
*/
