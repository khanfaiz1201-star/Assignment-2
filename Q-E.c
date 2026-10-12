#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,r1,r2;
    printf("enter the values a, b,c :");
    scanf("%d %d %d",&a,&b, &c);
    d=b*b-4*a*c;
    if (d<0)
        {
        printf("roots are imaginary.");
    }
    else if (d==0)
    {
        r1=-b/2*a;
        printf("roots are real and equal.");
        printf("%f",r1);
    }
    else
    {
    r1=(-b+sqrt(d))/2*a ;
    r2=(-b-sqrt(d))/2*a ;
    printf(" %d %d",r1, r2);
    }
}

