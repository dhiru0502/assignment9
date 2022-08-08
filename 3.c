#include<stdio.h>
int main()
{
    int x;
    printf("Enter the week number ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Today is fresh day");
        break;
        case 2:
        printf("Today is nice day ");
        break;
        case 3:
        printf("Today is smily day");
        break;
        case 4:
        printf("Today is  happy day");
        break;
        case 5:
        printf("Today is laughing day");
        break;
        case 6:
        printf("Today is sleeping day");
        break;
        case 7:
        printf("This is Enjoy Day");
        break;
        default :
            printf("Invalid choice");
    }
    return 0;
}
