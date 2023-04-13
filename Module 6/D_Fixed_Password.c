#include<stdio.h>

int main(){
     int x;
    
    while ( scanf("%d",&x) != EOF){
    
    int password=1999;

     if(x==password){
        printf("Correct\n");
        break;
        
     }else{
        printf("Wrong\n");
     }
    }
return 0;
}