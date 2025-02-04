//file input output practice
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr =fopen("file-prac.txt","r"); //in "w"(write) old data delete if file exixt
    //Reading from file 
    char ch;
    fscanf(fptr ,"%c",&ch);
    printf("character= %c\n" ,ch);
       fscanf(fptr ,"%c",&ch);
    printf("character= %c\n" ,ch);
       fscanf(fptr ,"%c",&ch);
    printf("character= %c\n" ,ch);
       fscanf(fptr ,"%c",&ch);
    printf("character= %c\n" ,ch);
       fscanf(fptr ,"%c",&ch);
    printf("character= %c\n" ,ch);
       fscanf(fptr ,"%c",&ch);
    printf("character= %c\n" ,ch);
       fscanf(fptr ,"%c",&ch);
    printf("character= %c\n" ,ch);
       fscanf(fptr ,"%c",&ch);
    printf("character= %c\n" ,ch);
    
    fclose(fptr);
    return 0;
}
//for run all word 
//after fopen: char ch;
//ch =fgetc(fptr)
//while (ch != EOF){
// printf("%c",ch);
// ch =fgetc(fptr);}
// printf("\n");
// fclose(fptr);
// return 0;  }

