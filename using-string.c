//Create a string first name and last name to store details of user and print all the characters using loop
#include<stdio.h>
void printstring(char arr[]);
int main(){
    char firstname[]="Rajendra";
    char lastname[]="Adhikari";
    printstring(firstname);
    printstring(lastname);
    return 0;
}
void printstring(char arr[]){
for(int i=0;arr[i]!='\0';i++){
printf("%c",arr[i]);
}
printf("\n");
}
//'0'is null which finish a string