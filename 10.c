#include<stdio.h>
int main()
{
    int a,b,c;
    float x,y,D;
    printf("Enter the value of coeficient of equation: ");
    scanf("%d %d %d",&a,&b,&c);
    D= (b*b)-(4*a*c);

    switch(D>0)
    {
    case 1:
        printf("Roots are real and distinct\n");
        x=(-b+ sqrt(D))/(2*a);
        y=(-b- sqrt(D))/(2*a);
        printf("Roots are %f and %f",x,y);
        break;
    case 0:
        switch(D==0)
        {
     case 1:
        printf("Both roots are equal");
        x=-b/(2.0*a);
        printf("Root is %f",x);
        break;
     case 0:
        printf("Both roots are imaginary");
        break;
        }
    }
    return 0;
}
