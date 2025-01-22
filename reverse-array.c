//write a function to reverse an arrray
#include<stdio.h>
int reverse(int arr[],int n);
void printArr(int arr[],int n);
int main() {
    int arr[] ={1,2,3,4,5};
    reverse(arr ,5);
    printArr(arr,5);
    return 0;
}
void printArr(int arr[],int n){
    for (int i=0 ;i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

}
int reverse(int arr[], int n){
    for (int i =0; i<n/2;i++){  //i<n/2 because we not to swap middle element So
        int firstval =arr[i];
        int secondval = arr[n-1-i];
        arr[i] = secondval;
        arr[n-i-1] = firstval;
    }
}