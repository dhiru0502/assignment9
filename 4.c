#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,a,b,c;
    while(1){
    printf("\nEnter your choice\n");
    printf("1. To check Isosceles triangle\n");
    printf("2. To check Right angled triangle\n");
    printf("3. To check Equilateral triangle\n");
    printf("4. Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter length of three sides of triangle\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b || b==c || c==a){
                printf("Triangle is Isosceles\n");
                break;}
        else{
                printf("Triangle is not Isosceles\n");
                break;}
    case 2:
        printf("Enter length of three sides of triangle\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a*a==b*b + c*c || b*b==c*c + a*a || c*c==a*a + b*b){
                printf("Triangle is Right angled\n");
                break;}
        else{
                printf("Triangle is not Right angled\n");
                break;}
    case 3:
        printf("Enter length of three sides of triangle\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a==b && c==a){
                printf("Triangle is Equilateral\n");
                break;}
        else{
                printf("Triangle is not Equilateral\n");
                break;}
    case 4:
                exit (0);
    default:
        printf("Invalid Choice");

    }
    }
    return 0;
}
