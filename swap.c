//swap value of a and b?(main function value only change call by reference not call by value ) in refernce we pass address of varaible
#include<stdio.h>
void swap(int a ,int b);
void _swap( int *a , int* b); //pointer value
int main(){
    int x = 3 , y =5;
    _swap(&x,&y);
    printf("x=%d & y =%d\n", x,y);
    return 0;

}
//call by refernce 
void _swap( int *a , int *b){
    int t = *a;
    *a = *b;
    *b =t;
}


//calling by value
void swap(int a ,int b){
    int t = a;
    a =b;
    b =t;
    printf("a = %d & b= %d\n",a,b);
}

