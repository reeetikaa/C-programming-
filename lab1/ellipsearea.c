// Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm).

#include<stdio.h>
int main(){
    float minor= 4, major = 6, area;
    area = 3.14 * minor * major;
    printf("the area of an ellipse is %.2f", area);
    return 0;
}