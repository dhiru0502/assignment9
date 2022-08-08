#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year for check leap year: ");
    scanf("%d",&x);
    switch(x%100==0)
    {
        case 1: switch(x%400==0)
        {
            case 1: printf("leap Year"); break;
            case 0: printf("Not leat Year"); break;
        } break;
        case 0: switch(x%4==0)
        {
            case 1: printf("leap Year"); break;
            case 0: printf("Not leat Year"); break;
        } break;
    }
}
