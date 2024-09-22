#include <stdio.h>

void prime(int x){

    for(int i = 2;i<=x;i++){
        if(x%i==0){
            printf("%d , ",i);
            return prime(x/i);
        }
    }
}


int main(void){
    int x,y;
    x=0;
    printf("Integer : ");
    scanf("%d",&x);

    prime(x);
    printf("1\n");
}

