#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    switch(x>0)
    {
        case 1: printf("Converted number is : -%d",x);
                break;
        case 0: printf("Converted number is : %d",x/(-1));
                break;
    }
    return 0;
}
