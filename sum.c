//sum of number from 5 to 50
#include<stdio.h>
int main(){
    int sum =0;
    for(int i=5; i<=50; i++){
        sum += i;
    }
    printf("sum is %d\n", sum);
    return 0;
}