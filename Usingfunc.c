//write a function that print Namaste if user is Nepalese and Bonjour if the user is French
#include<stdio.h>
void namaste();
void bonjour();
int main() {
    printf("enter f for french and n for nepalese");
    char ch;
    scanf("%c",&ch);
    if (ch =='n'){
        namaste();
    } else {
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour");
}