#include<stdio.h>

int main(){
     int n,v,even=0,odd=0;
     scanf("%d",&n);

     for (int i = 1; i<=n; i++)
     {
        scanf("%d",&v);

        if(v%2==0){
            // printf("%d ",v);
            even=even+v;
            
        }else{
            // printf("%d ",v);
            odd=odd+v;
        }
     }


            printf("%d %d",even,odd);
     
return 0;
}