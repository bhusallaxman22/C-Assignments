#include<stdio.h>
int main()
{
    int sec, min, hour;
    printf("enter number of seconds");
    scanf("%d", &sec);
    min = sec/60;
    hour = sec/3600;
    printf("the mins is %d", &min);
    printf("the hour is %d", &hour);
}
