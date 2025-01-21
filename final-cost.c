//write a program to enter price of three items and print their final cost with vat
#include<stdio.h>
int main(){
    float price [3]; //array 
    printf("enter 3 prices:");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("total price 1:%f\n",price[0]+(0.13*price[0]));
    printf("total price 1:%f\n",price[1]+(0.13*price[1]));
    printf("total price 1:%f\n",price[2]+(0.13*price[2]));
    return 0;
}