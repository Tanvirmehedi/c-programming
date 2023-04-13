#include<stdio.h>

int main(){
     int n,maxN=0,a;
     scanf("%d",&n);

    for (int i = 0; i<=n; i++)
    {
        scanf("%d",&a);

        if(a>maxN){
            maxN = a;
        }
        
    }
    
     
    printf("%d\n",maxN);

return 0;
}