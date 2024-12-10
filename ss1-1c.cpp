#include<stdio.h>

int main(){

    int num1,num2;

    printf("Moi ban nhap so thu nhat ");
    scanf("%d",&num1);

    printf("Moi ban nhap so thu hai ");
    scanf("%d",&num2);

    if (num1>num2){
     printf("so nho hon la: %d",num2);
    } else {
        printf("so nho hon la: %d",num1);
    }
    return 0;
}
