#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int hr,min,sec,ipsec;
    printf("enter time in seconds");
    scanf("%d",&ipsec);
    hr=ipsec/3600;
    min=(ipsec-hr*3600)/60;
    sec=(ipsec-hr*3600-min*60);
    printf("\nHour=%d Min= %d Sec=%d",hr,min,sec);
    return 0;
}