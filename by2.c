//To check if a number is divisible by 2 or not

#include <stdio.h>

int main(){
    int num;
    printf("enter your integer :");
    scanf("%d",&num);
    if (num%2==0)
        printf("Number is Divisible by 2");
    else
        printf("not divisible");
    return 0;
}