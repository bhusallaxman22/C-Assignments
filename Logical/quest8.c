#include <stdio.h>
#include <conio.h>

int main()
{
    int i=8, j;

     for (j = 1; j <= 10; j++)
    {
        printf("%d * %d = %d\n", i, j, i*j);
    }
    return 0;
    getch();
}