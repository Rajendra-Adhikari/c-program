//Find the salted form of passwoed entered by user if the salt is "123"and added at the end
#include<stdio.h>
#include<string.h> //to remove warning must be string declare
void salting(char password[]);
int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
    return 0;
}
void salting(char password[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass ,password); //copying: newpass ="password user enter"
    strcat(newpass,salt);//new pass = "password user enter"+"123"
    puts(newpass);
    
}
