#include<stdio.h>
int calcPercentage(int science,int math, int sanskrit);
int main(){
    int sc =98;
    int math =95;
    int sanskrit =99;
    printf("percentage is :%d",calcPercentage(sc,math,sanskrit));
    return 0;

}
int calcPercentage(int science,int math, int sanskrit){
    return ((science +math+sanskrit)/3);
}