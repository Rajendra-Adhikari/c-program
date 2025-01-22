//to print nuumber using array as function argument
#include<stdio.h>
void printnumber(int arr[],int n);//using sq.bracket array or we write using pointer *arr
int main(){
    int arr[]={1,2,3,4,5,6};
    printnumber(arr,6);
    return 0;

}
void printnumber(int arr[],int n){
    for(int i=0 ; i<n; i++){
        printf("%d\t",arr[i]);
      
    }
    printf("\n");
    
}