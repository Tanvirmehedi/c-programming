#include<stdio.h>

int main(){


int i,n;

int sum=0;

scanf("%d",&n);

for(i=1;i<=n;i+=1){

    sum+=i;
}
    printf("Hello Loop %d\n",sum);


    return 0;
}