//write a program in c to /find maximum number between two number using pointer
#include<stdio.h>
void findmax(int *num1 ,int *num2,int *max);
int main(){
    int a, b, max;
    printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    findmax(&a,&b,&max);
    printf("the maximum number between %d and %d is :%d\n",a,b,max);
    return 0;

}
void findmax(int *num1 ,int *num2 , int *max){
    if (*num1 > *num2){
        *max =*num1;
    }
    else{
        *max = *num2;
    }
}