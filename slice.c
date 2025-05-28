//write a function named slice,which takes string and returns a sliced string from index n to m
#include<stdio.h>
void slice(char str[],int n,int m);
int main(){
    char str[] ="Helloworld";
    slice(str ,3,6); 


}
void slice(char str[],int n,int m){ //n and m are valid value
    char newstr[100];
    int j=0;
    for(int i =n;i<=m;i++,j++){
        newstr[j] =str[i];

    }
    newstr[j]='\0';
    puts(newstr);
}


