//write a program  to print high frequency character  in a string
#include <stdio.h>
#include <string.h>

char findHighFreqChar(char str[]);

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Highest frequency character is: '%c'\n", findHighFreqChar(str));
    return 0;
}

char findHighFreqChar(char str[]) {
    int freq[256] = {0}, maxFreq = 0;
    char highFreqChar = '\0';  // Initialize to null character

    for (int i = 0; str[i] != '\0'; i++) {  // Corrected condition to check for null terminator
        if (str[i] != ' ' && str[i] != '\n') {  // Ignore spaces and newlines
            freq[(int)str[i]]++; //int taken for ASCII number
            if (freq[(int)str[i]] > maxFreq) {
                maxFreq = freq[(int)str[i]];
                highFreqChar = str[i];
            }
        }
    }
    return highFreqChar;
}
