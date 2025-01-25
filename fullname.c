//Ask a user to enter their first name and print it back to them .Also try that with full name:
#include<stdio.h>
void printstring(char arr[]);
int main(){
    //char firstname[50];
    //scanf("%s",firstname);
   // printf("your name is %s",firstname);
   //for full name:
   char str[100];
   fgets(str,100,stdin); //use to print all line as(scanf can't)
   puts(str);
    return 0;
}
void printstring(char arr[]){
    for(int i=0; arr[i] !='\0';i++){
    printf("%c",arr[i]);
}
printf("\n");
}