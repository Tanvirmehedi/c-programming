// You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

// For example:
// Inputs are 5 and 2
// Then you’ll give output as:
// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50

#include<stdio.h>

int main(){

int a,b;

scanf("%d %d",&a,&b);

int add= a+b;
int min= b-a;
int mul= b*a;
float div= a*1.0/b;

printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f",a,b,add,a,b,min,a,b,mul,a,b,div);

    return 0;
}