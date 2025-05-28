//write  a program to store data of 3 student
#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;//variable define
    s1.roll =230;
    s1.cgpa =3.7;
    strcpy(s1.name ,"Ram");//in string data value can't change only copy and compare 

    printf("student name =%s\n",s1.name);
    printf("student roll no =%d\n",s1.roll);
    printf("student cgpa =%f\n",s1.cgpa);

    struct student s2;//variable define
    s2.roll =232;
    s2.cgpa =3.8;
    strcpy(s2.name ,"Hari"); 
    
    printf("student name =%s\n",s2.name);
    printf("student roll no =%d\n",s2.roll);
    printf("student cgpa =%f\n",s2.cgpa);

    struct student s3;//variable define
    s3.roll =231;
    s3.cgpa =3.9;
    strcpy(s3.name ,"dinesh");

    printf("student name =%s\n",s3.name);
    printf("student roll no =%d\n",s3.roll);
    printf("student cgpa =%f\n",s3.cgpa);
    return 0;
}