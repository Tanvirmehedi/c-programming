#include<stdio.h>


int main(){

    int i,n;

    scanf("%d",&n);

    for(i=1;i<=n;i++){

        if(i%2==0){
            printf("%d-is evan Number\n",i);
        }else{

            printf("%d-is odd Number\n",i);
        }
    }

    return 0;
}