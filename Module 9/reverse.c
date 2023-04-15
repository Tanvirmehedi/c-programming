#include<stdio.h>

int main(){
     int n;
     scanf("%d",&n);
    int ar[n];

     for (int i = 0; i <n; i++)
     {
        scanf("%d",&ar[i]);
     }
int c=0,d=n-1;

while (c<d)
{
    int tmp = ar[c];
    ar[c]=ar[d];
    ar[d]=tmp;
    c++;
    d--;
}


    for (int i = 0; i <n; i++)
    {
        printf("%d ",ar[i]);
    }
     
return 0;
}