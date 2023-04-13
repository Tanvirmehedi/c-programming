#include<stdio.h>

int main(){
     int n,maxN=0;

     scanf("%d",&n);

     if(n<=0){
        for (int i = n; i <=1; i++)
        {
                printf("%d ",i);
           
        }
        printf("\n");
     }else{
        for(int i=1;i<=n;i++){
            printf("%d ",i);
        }
        printf("\n");
     }
return 0;
}