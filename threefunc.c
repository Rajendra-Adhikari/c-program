//write a function to calculate Area of square,rectangle and circle
#include<stdio.h>
#include<math.h> //library function math if use or not use program run (not necessary to use in this program)
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);
int main (){
    float side=3.0;
    printf("square Area is:%f\n",squareArea(side));//calling square area
    float rad =2.0;
    printf("circle Area is :%f\n",circleArea(rad));//calling circle area
    float a=5.0;
    float b=10.0;
    printf("Rectangle Area is :%f",rectangleArea(a,b));//calling rectangle area
 
 return 0;
}
float squareArea(float side){
    return side*side;
}
float circleArea(float rad){
    return 3.14 * rad * rad;
}
float rectangleArea(float a,float b){
    return a * b;
}
