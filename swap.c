#include<stdio.h>
int main(){
    int a,b;
    printf("enter value of a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValues after swap a=%d and b=%d",a,b);
    return 0;
}