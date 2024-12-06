// Write a program to calculate simple interest for a given P=4000, T=2, R=5.5.

# include<stdio.h>
int main(){
    float P=4000, T=2, R=5.5, SI;
    SI=(P*T*R)/100;
    printf("Simple interest is %.2f",SI);
    return 0;
}