//using recursion function to find factorial of n
#include<stdio.h>
int fact(int n);
int main(){
    printf("factorial is :%d",fact(4));
    return 0;

}
int fact(int n){
    if(n==1){   //n==0 
        return 1;//basecase is imp otherwise program will stack overflow
    }
    int factNm1 = fact(n-1);
    int factN =factNm1 * n;
    return factN;
}