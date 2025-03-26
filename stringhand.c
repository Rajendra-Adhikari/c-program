#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[30] = "Ram", str2[10] = "Ramayan";
    
    // Length of str1
    printf("Length of str1: %lu\n", strlen(str1));

    // Copy str2 to str1
    strcpy(str1, str2);
    printf("After strcpy: %s\n", str1);

    // Concatenate str2 to str1
    strcat(str1, str2);
    printf("After strcat: %s\n", str1);

    // Compare str1 and str2
    int cmp = strcmp(str1, str2);
    printf("strcmp result: %d\n", cmp);

    // Convert str1 to lowercase
    for (int i = 0; str1[i]; i++) {
        str1[i] = tolower(str1[i]);
    }
    printf("After converting to lowercase: %s\n", str1);

    // Convert str2 to uppercase
    for (int i = 0; str2[i]; i++) {
        str2[i] = toupper(str2[i]);
    }
    printf("After converting to uppercase: %s\n", str2);

    return 0;
}
