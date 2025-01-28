//check if a given character is present in string or not
#include<stdio.h>
void checkchar(char str[],char ch);
int main(){
    char str[]="RajendraAdhikari";
    char ch ;
    printf("Enter a character to check: ");
    scanf(" %c", &ch);
   checkchar(str,ch);
   return 0;
}
void checkchar(char str[],char ch){
    for (int i=0; str[i] !='\0';i++){
        if(str[i]==ch) {
            printf("character is present");
            return;
        }
    }
 printf("character is not present");
}
