#include<stdio.h>
int main(){
    int a, b, quot, rem;
    printf("enter two integers");
    scanf("%d", &a, &b);
    quot = a/b;
    rem= a%b;
    printf("the quotient is %d \n", quot);
    printf("the remainder is %d \n", rem);
}
