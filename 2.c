#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
    {
        printf("\n 1. Addition");
        printf("\n 2. Substraction");
        printf("\n 3. Multiplication");
        printf("\n 4. Division");
        printf("\n 5. Exit");
        printf("\n\n  Enter your choice: ");
        scanf("%d",&x);

        switch(x)
        {

        case 1:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Sum is %d",a+b);
            break;
        case 2:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Difference is %d",a-b);
            break;
        case 3:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Product is %d",a*b);
            break;
        case 4:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Quotient is %d",a/b);
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice\n");
        }

    }
}
