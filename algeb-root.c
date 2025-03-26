#include<stdio.h>
#include<math.h>
int main(){
    float root1,root2,a ,b,c,d;
    printf("enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
        //roots are distinct real
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Two distinct roots are %.2f %.2f",root1,root2);
    }
    else if(d==0){
        //real root.
       float root = -b/(2*a);
       printf("real root is %.2f",root);
    }
    else{
        //complex root
      float  realpart =-b/(2*a);
      float imagpart =sqrt(-d)/(2*a);
      printf("Two complex roots :%.2f+%.2fi and %.2f-%.2fi",realpart,imagpart,realpart,imagpart);
 
    }
    
    return 0;
}

    

