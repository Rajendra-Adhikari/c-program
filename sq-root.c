//write a function to find square root of number?
#include<stdio.h>
#include<math.h>
float findsquareroot(float num); //func declare
int main(){
    float num;
    printf("enter a number:");
    scanf("%f",&num);
    float result = findsquareroot(num); //func call
    if(result != -1){
    printf("the square root of %f is %f\n",num,result); //(%.2f)also written to print 2 number only after decimal
    }
       return 0;
}
//func define
float findsquareroot(float num){
    if(num <0){
        printf("Error :Negative number entered\n");
        return -1;
    }

return sqrt(num);
}

