#include<stdio.h>
int main()
{
int n1=0,n2=1,N;
int i,n;
printf("Enter a number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    printf("%d\n",n1);
    N=n1+n2;
    n1=n2;
    n2=N;
}
return 0;


    }
