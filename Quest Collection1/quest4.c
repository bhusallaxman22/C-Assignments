#include <stdio.h>
int main(){
    int l, b, area, peri;
    printf("enter lenght and breadth");
    scanf("%d %d", &l, &b);
    area = l*b;
    peri = 2*l+2*b;
    printf("the area is %d", area);
    printf("perimeter is %d", peri);
}