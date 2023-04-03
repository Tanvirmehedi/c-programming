// You need to take one integer value as input and tell if the value is positive or negative or zero.
// See the sample input and output for more clarification.

#include<stdio.h>

int main(){

    int input;

    scanf("%d",&input);

    if(input>0){

        printf("Positive");
    
    }else if(input<0){
    
        printf("Negative");
    
    }else{
    
        printf("Zero");
    
    }

    return 0;
}