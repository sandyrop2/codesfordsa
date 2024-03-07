#include<stdio.h>
void fib(int);
main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    fib(n);
}
void fib(int n)
{
    int i,t1,t2,t3;
    for (i=0,t2=1,t1=0;i<=n;i++)
    {
        t3=t1+t2;
        printf("%d,",t3);
        t1=t2;
        t2=t3;
    }
}
