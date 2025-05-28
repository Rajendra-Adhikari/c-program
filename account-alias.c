//Make a structure to store Bank Account Information of a customer of ABC Bank .Also make an alias for it.
#include<stdio.h>
typedef struct BankAccount {
    int accountNo;
    char name[100];
}acc;
int main(){
    acc acc1 ={12345,"rajesh"};
    acc acc2 ={24680,"Hari"};
    acc acc3 ={13579,"darpan"};
    //printing acc1
    printf("acc no =%d\n",acc1.accountNo);
    printf("name= %s\n",acc1.name);
    return 0;
}
