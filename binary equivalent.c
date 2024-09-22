# include<stdio.h>

void binary_equivalent (int dec){
    int arr[32];
    int i =0;
    for(i = 0;dec!=0;i++){
        arr[i] = dec%2;
        dec /=2;
    }
    printf("the binary equivalent is : ");
    for(int j=0;j<i;j++){
    printf("%d",arr[j]);
    }
    printf("\n");
}

int main(void){
    int dec;
    printf("Enter the decimal integer : ");
    scanf("%d",&dec);
    binary_equivalent(dec);
}