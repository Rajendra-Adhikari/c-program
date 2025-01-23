//create a 2D array to store table of 2 and 3
#include<stdio.h>
void storetable(int arr[][10], int n, int m ,int number);
int main(){
    int table [2][10]; // 2 array of aize 10
    storetable(table ,0,10 ,2); //passing 0 row
    storetable(table ,1,10 ,3); //passing 1
    for (int i=0; i<10; i++){ //0 to 10
        printf("%d\t",table [0][i]);
    }
    printf("\n");
        for (int i=0; i<10; i++){
        printf("%d\t",table [1][i]);
        }
    return 0;
}
void storetable(int arr[][10],int n ,int m ,int number){
    for (int i=0; i<m; i++){  //0 to 10  {row(n) = constant}
    arr[n][i] = number * (i+1); //2*(0+1)=2,4,6....
   //arr[0][0] arr[0][1]...
}
        
    
}
//n and m consider row and column r