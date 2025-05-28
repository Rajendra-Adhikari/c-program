#include <stdio.h>
#include <string.h>
#include <ctype.h>




// Custom to-lowercase
void toLower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Custom to-uppercase
void toUpper(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str1[40] = "Ram", str2[10] = "Ramayan";
    int l, l1;

    l = strlen(str1);
    printf("Length of str1: %d\n", l);

    strcpy(str1, str2);
    printf("After strcpy: %s\n", str1);

    strcat(str1, str2);
    printf("After strcat: %s\n", str1);

    l1 = strcmp(str1, str2);
    printf("Result of strcmp: %d\n", l1);

    
    toLower(str1);
    printf("After toLower: %s\n", str1);

    toUpper(str2);
    printf("After toUpper: %s\n", str2);

    return 0;
}
