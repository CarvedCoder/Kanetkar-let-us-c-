# include<stdio.h>

int main(void){
    int x;
    while(x!= 4){
    printf("\nswitch menu :-\n\n1 --> factorial \n2 --> prime no. \n3 --> odd or even \n4 --> exit\n");
    scanf("%d",&x);

    switch(x){
        case 1:
        printf("factorial done\n");
        break;
        case 2:
        printf("prime no. found\n");
        break;
        case 3:
        printf("odd or even found\n");
        break;
        case 4:
        printf("Exiting....\n");
        break;
    }
    }
    printf("exited sucessfully\n");
    
}