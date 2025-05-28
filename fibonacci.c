//write a function to print n terms of fibonacci sequence(recursion used)(fib sequence = 0 1 1 2 3 5 8 13 ...)
#include<stdio.h>
int fib(int n);
int main(){
 printf("%d",fib(6)); //fib(6)if in define section printf placed
return 0;
}
int fib (int n){
if (n==0) { 
return 0;
 }
//if are base case in recursion
if (n==1){
return 1;
 }

int fibNm1 =fib(n-1);
int fibNm2 = fib(n-2);
int fibN =fibNm1 +fibNm2;
//printf("fib of %d is %d\n",n,fibN);
return fibN;

}