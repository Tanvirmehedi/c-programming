#include<stdio.h>

int main(){

    int a=10,b=23;

    int sum=a+b;
    int min=b-a;
    int mlt= a*b;
    float div=b*1.0/a;
    int rem= b%a;
    long t= a>b;

    printf("Add:%d\nMinus:%d\nMultiply:%d\nDivided:%.2f\nRemainder:%d\nBool %d",sum,min,mlt,div,rem,t);


    return 0;
}