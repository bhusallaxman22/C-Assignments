#include<stdio.h>
#define pi 3.14
int main() {
    int rad, area, circ;
    printf("Enter raius");
    scanf("%d", &rad);
    area = pi*rad*rad*rad;
    circ = 2*pi*rad;
    printf("area is %d \n", area);
    printf("circ is %d \n", circ);
}
