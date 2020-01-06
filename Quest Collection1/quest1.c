#include <stdio.h>
int main(){
    int a, b, sum, div, mul, sub;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    sum = a+b;
    div = a/b;
    mul = a*b;
    sub = a-b;
    printf("The division is %d \n", div );
    printf("The sum is %d \n", sum);
    printf("The multiple is %d \n", mul);
    printf("The subtraction is %d \n", sub);
}