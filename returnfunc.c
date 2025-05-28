//using return function 
#include<stdio.h>

int sum(int a, int b);//declaration
int main(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);

    int s = sum(a,b);//call
    printf("sum is: %d \n",s);
    return 0;
    
}
int sum(int x, int y){     
    return x +y;
} //defination 