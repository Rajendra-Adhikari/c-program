//write a function to count the number of odd numbers in an array
#include<stdio.h>
int countodd(int arr[],int n);
int main(){
    int arr[] ={1,2,3,4,5,6,7,8};
    printf("total count of odd number:%d",countodd(arr,8));

    return 0;
}
int countodd(int arr[],int n){
   int count =0;
    for(int i=0;i<n;i++){
    if(arr[i] %2 !=0){ //odd
        count++;
    }
    }
return count;
}