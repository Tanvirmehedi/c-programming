#include<stdio.h>

int main(){
     int n = 4,i,sum=0;
     
     int arr[n];

     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

     for(i=0;i<n;i++){
        sum+=arr[i];
     }
    printf("%d\n",sum);
return 0;
}