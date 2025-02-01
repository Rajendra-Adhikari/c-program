//create  a structure to store complex number (use arrow operator)
#include<stdio.h>
struct complex {
    int real;
    int img;

};
int main(){
    struct complex number1={5,8};
    //print using arrow so it need pointer
    struct complex*ptr =&number1;
    printf("real part = %d\n",(*ptr).real); //real = ptr ->real
    printf("img part = %d\n",(*ptr).img);
    return 0;
}