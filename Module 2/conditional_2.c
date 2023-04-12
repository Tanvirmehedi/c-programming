#include<stdio.h>

int main(){

int tk;

scanf("%d",&tk);

if(tk>=100){
    printf("%d Taka Ache Tw Burger Khabo!",tk);
}else if(tk>=50){
    printf("%d Taka Ache Tw Fuchka Khabo!",tk);
}else if(tk>=20){
    printf("%d Taka Ache Ice Cream Khabo!",tk);
}else{
    printf("%d Taka Ache,Khabo Na Kichu!",tk);
}

return 0;
}