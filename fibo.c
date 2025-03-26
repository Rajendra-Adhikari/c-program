#include<stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;

    }
  else if(n==1){
    return 1;
  }
  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
int main(){
    int a,k;
    printf("enter a number of terms\n:");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        k=fibonacci(i);
    
        printf("%d\n",k);
    }
    
    return 0;
}