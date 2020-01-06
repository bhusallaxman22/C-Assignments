#include<stdio.h>
int main(){
    int a,b, sum, diff;
    printf("Enter two numbers: \n ");
    scanf("%d %d", &a, &b);
    if (a>b)
    {
        sum = a+b;
        printf("1st Number is grater hence the sum is: %d \n", sum);
    } else
    {
        diff=a-b;
        printf("2nd number is garter hence the difference is: %d \n", diff);
    }
    
    
}