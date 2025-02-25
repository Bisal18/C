#include <stdio.h>
#include <string.h>
 
int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    char str3[50];
    char str4[] = "This is a sample string.";
    char *ptr;
    
    // 1. String Copy
    strcpy(str3, str1);  // Copy str1 into str3
    printf("strcpy: %s\n", str3);
 
    // 2. String Concatenation
    strcat(str1, str2);  // Append str2 to str1
    printf("strcat: %s\n", str1);
 
    // 3. String Length
    printf("strlen(str1): %lu\n", strlen(str1));
 
    // 4. String Comparison
    printf("strcmp(\"apple\", \"banana\"): %d\n", strcmp("apple", "banana"));
    printf("strcmp(\"hello\", \"hello\"): %d\n", strcmp("hello", "hello"));
 
    // 5. String Comparison (first n characters)
    printf("strncmp(\"apple\", \"apricot\", 3): %d\n", strncmp("apple", "apricot", 3));
 
    // 6. String Copy (first n characters)
    strncpy(str3, "NewString", 4);  
    str3[4] = '\0';  // Ensure null termination
    printf("strncpy: %s\n", str3);
 
    // 7. String Reverse
    printf("strrev (not standard in C, use custom function if needed)\n");
 
    // 8. String Search
    ptr = strchr(str4, 's');  // Find first occurrence of 's'
    if (ptr)
        printf("strchr: Found 's' at position: %ld\n", ptr - str4);
    
    // 9. String Search (last occurrence)
    ptr = strrchr(str4, 's');
    if (ptr)
        printf("strrchr: Last 's' found at position: %ld\n", ptr - str4);
 
    // 10. String Substring Search
    ptr = strstr(str4, "sample");
    if (ptr)
        printf("strstr: Found 'sample' at position: %ld\n", ptr - str4);
 
    // 11. String Tokenization
    char str5[] = "apple,banana,grape";
    char *token = strtok(str5, ",");
    printf("strtok: Tokens - ");
    while (token != NULL) {
        printf("%s ", token);
        token = strtok(NULL, ",");
    }
    printf("\n");
 
    // 12. Memory Operations
    char str6[50] = "Memory Test";
    memset(str6, '*', 6);  // Fill first 6 characters with '*'
    printf("memset: %s\n", str6);
 
    char src[] = "memmove example";
    memmove(str6, src, strlen(src) + 1);  // Safe copying
    printf("memmove: %s\n", str6);
 
    return 0;
}
