#include<stdio.h>
int add(int ,int);
int sub(int,int);
int mul(int,int);
int main(){
    int a,b;
    printf("enter numberl");
    scanf("%d%d",&a,&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    return 0; 
}
int add(int a,int b){
    printf("sum is %d",a+b);
}
int sub(int a,int b){
    printf("sub is %d",a-b);
}
int mul(int a, int b){
    printf("mul is %d",a*b);
}