#include <stdio.h>
#include <conio.h>
int main() {
    char ch, cho;
    do
    {
        printf("Menu\n");
        printf("c\tChowmein\n");
        printf("m\tMomo\n");
        printf("b\tBurger\n");
        printf("Enter Your Choice!\n");
        scanf("%c", &ch);
        fflush(stdin);
        switch (ch)
        {
        case 'm':
            printf("You ordered Momo\n");
            break;
        case 'b':
            printf("You ordered Burger\n");
            break;
        case 'c':
            printf("You ordered Chowmein\n");
            break;
        default:
        printf("Not Available In Menu\n");
            break;
        }
    printf("Do you wish to continue\n");
    scanf("%c", &cho);
    fflush(stdin);
    } while (cho== 'y' || cho== 'Y');
    return 0;
}