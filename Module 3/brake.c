#include<stdio.h>


int main(){

    int i,n;

    scanf("%d",&n);

    for(i=1;i<=n;i++){

        printf("%d-is Number\n",i);
        if(i==10){
            break;
        }
    }

    return 0;
}