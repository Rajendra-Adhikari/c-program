//passing structure to function
#include<stdio.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};
void printInfo(struct student s1);
int main(){
    struct student s1 ={234,3.6,"samir"};
    printInfo(s1); //pass as a argument
  return 0;
}
void printInfo(struct student s1){
    printf("student Info is :\n");
    printf("student.roll=%d\n",s1.roll);
    printf("student.cgpa =%f\n",s1.cgpa);
    printf("student.name =%s\n",s1.name);
}
    
