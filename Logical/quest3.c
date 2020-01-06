#include<stdio.h>
#include<conio.h>
int main(){
    int i = 1;
    while (i<=100)
    {
        if (i%2==0)
       printf("the even number is %d \n", i);
       i=i+1;
    }
    printf("end of program");
    getch();
    
}