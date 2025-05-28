//practice to use structure in c
#include<stdio.h>
#include<string.h>
//user define
struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll =320;
    s1.cgpa =3.8;
    strcpy(s1.name,"Rajendra");

    printf("student name = %s\n",s1.name);
    printf("student roll no =%d\n",s1.roll);
    printf("student cgpa =%f\n",s1.cgpa);
    return 0;
}