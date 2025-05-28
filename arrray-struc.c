#include<stdio.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main(){
   struct student s1={123,4,"rajendra"};
   struct student *ptr = &s1;
   printf("studentroll no =%d\n",(*ptr).roll);
   printf("studnt->rollno=%d\n",ptr->roll);
    return 0;
}