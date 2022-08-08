#include<stdio.h>
int main()
{
    int m;
    printf("Enter a month number: ");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
        printf("Day in January month is 31");
        break;
    case 2:
        printf("Day in February month is 28");
        break;
    case 3:
        printf("Day in March month is 31");
        break;
    case 4:
        printf("Day in April month is 30");
        break;
    case 5:
        printf("Day in May month is 31");
        break;
    case 6:
        printf("Day in June month is 30");
        break;
    case 7:
        printf("Day in July month is 31");
        break;
    case 8:
        printf("Day in August month is 31");
        break;
    case 9:
        printf("Day in September month is 30");
        break;
    case 10:
        printf("Day in October month is 31");
        break;
    case 11:
        printf("Day in November month is 30");
        break;
    case 12:
        printf("Day in December month is 31");
        break;
    default:
            printf("Invalid number");
    }
}
