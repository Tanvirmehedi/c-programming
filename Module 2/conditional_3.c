#include<stdio.h>

int main(){

    int taka ;

    scanf("%dTaka Input Here",&taka);

    if(taka>= 5000){
        printf("%d Taka Ache Cox's Bazar Jabo\n",taka);
        
        if(taka>= 12000){
            printf("%d Taka Ache Seint Martin Jabo!",taka);
        }else{
            printf("%d Taka Ache ,Dhaka Ferot Jabo!",taka);
        }

    }else{
        printf("%d Taka Ache Kothao Jabo Na!\n",taka);
    }
    return 0;
}