//write a function to find dum of digits of a number
#include<stdio.h>
int sumofdigit(int num);
int main(){
    
    int num= 2357;
    printf("The sum of digit is %d\n",sumofdigit(num));
    return 0;

}
int sumofdigit(int num){
    int sum = 0;
    while ( num != 0) {
        sum = sum + num % 10;
        num =num/10;
     
    }
    return sum;
}
//logic
//initialize sum =0 as use while loop as long num >0
//add the remainder or last digit to sum and remove last digit(num /=10)