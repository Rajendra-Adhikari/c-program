#include<stdio.h>
#include<conio.h>
int main(){
    int m,n,c;
    char ch,che;
    do{
    printf("enter any two number:\n");
    scanf("%d%d",&m,&n);
    printf("enter operator: +,-,*,/\n");
    ch= getche();
    
        switch(ch){
            case '+': c=m+n;
            printf("sum is %d\n",c);
            break;
            case'-':c=m-n;
            printf("subtraction is %d\n",c);
            break;
            case'*':c=m*n;
            printf("multiplication is %d\n",c);
            break;
            case'/':
            if(n==0)
            printf(" division by zero is not possible");
            else
            printf("division is %d\n",m/n);
            break;
            default:
            printf("wrong operator \n");
           

        }
        printf("do you want to do  more operation Y or N\n");
        che=getche();
    }while(che=='Y');
    
}