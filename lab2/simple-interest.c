// Write a program to calculate simple and compound interest.

#include<stdio.h>
#include<math.h>
int main(){
    float P,T,R,SI,CI;
    printf("Enter the principle, time and rate :");
    scanf("%f %f %f",&P,&T,&R);

    SI =(P * T * R)/100;
    printf("The simple interst is: %.2f\n", SI);

    CI = P * pow((1 + R/1200), (12*R));
    printf("The compound interest is: %.2f", CI);
    return 0;
}