//write a program to convert all lowercase vowels to uppercase in a string
#include<stdio.h>
void convertVowels(char str[]);

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string(vowels): ");
    fgets(str, sizeof(str), stdin);
    convertVowels(str);
     printf("Modified string: %s", str);

    return 0;
}
void convertVowels(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if character is a lowercase vowel
        if (str[i] == 'a') str[i] = 'A';
        else if (str[i] == 'e') str[i] = 'E';
        else if (str[i] == 'i') str[i] = 'I';
        else if (str[i] == 'o') str[i] = 'O';
        else if (str[i] == 'u') str[i] = 'U';
    }
}
