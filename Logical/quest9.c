#include <stdio.h>
int main(){
int f0=0, f1=1, f2, i;
for (int i = 2; i <= 10; i++)
{
for (int j = 1; j <= 10; j++)
{
    printf("%d * %d = %d \n",i,j, i*j);
}
    printf("\n");
}

}