#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,root1,root2,img,real,D;
    printf("enter coeff a,b,c");
    scanf("\n%f%f%f",&a,&b,&c);
    D= b*b - 4*a*c;
    if(D>0){
        //Both root are real and distinct

        root1=(-b +sqrt(D))/2*a;
        root2= (-b-sqrt(D))/2*a;
        printf("\nthe roots are %f %f",root1,root2);
    }
    else if(D=0){ //roots are real and same
        root1= -b/2*a;
        printf("\nroots are root1=root2%f",root1);
    }

    else{  //roots are imaginary and distinct
        real=-b/2*a;
        img=sqrt(b*b- 4*a*c);
        printf("\nroots are root1=%f+i%f",real,img);
        printf("\nand root2=%f-i%f",real,img);
    }

    return 0;
}