//write  a program to input student information from a user and enter to file
#include<stdio.h>
int main(){

    FILE *fptr;
    fptr =fopen("student.txt","w");

    char name[100];
    int age;
    float cgpa;
  //taking information
    printf("enter student name :");
    scanf("%s",name);
    printf("enter student age :");
    scanf("%d",&age);
    printf("enter student cgpa :");
    scanf("%f",&cgpa);
   //writing in sudent .txt file
    fprintf(fptr,"student name: %s\n",name);
    fprintf(fptr,"student age: %d\n",age);
    fprintf(fptr,"student cgpa: %f\n",cgpa);
    
    fclose(fptr);
    return 0;

}