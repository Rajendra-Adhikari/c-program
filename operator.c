#include<stdio.h>
#include<conio.h>
int main(){
    int a=4,b=8,c=3;
    float d=3.5,e=7.5;
    printf("a +b=%d\n",a+b);
    printf("b is divided by a=%d\n",b/a);
    printf("e-b=%f\n",e-b);
    printf("c multiply b=%d\n",c*b);
    printf("b module c =%d\n",b%c);
    printf("d<e=%f\n",d<e);
    printf("a<b && c>b=%d\n",(a<b)&&(c>b));
    printf("e>d||b<a=%d\n",(e>d)||(b<a));
    printf("a is not equal to b=%d\n",a!=b);
    return 0;
}