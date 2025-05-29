//take a string input from the user using %c
#include<stdio.h>
int main(){
    char str[100];
    char ch ;
    int i=0;
    while(ch !=  '\n'){
        scanf("%c",&ch); //taking input from user
        str[i]=ch ;//putting user value in str
        i++;
    }
    str[i] ='\0';//telling compiler that it is string as due to  %c compiler cannot auto know that
    puts(str);
    printf("hello world");
    return 0;
    
}