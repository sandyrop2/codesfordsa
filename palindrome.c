#include<stdio.h>
int p(int);
main()
{
    int n,r;
    printf("enter the number\n");
    scanf("%d",&n);
    r=p(n);
    if(r==n)
        printf("the number is palindrome\n");
    else
        printf("it is not a palindrome\n");
}
int p(int n)
{
    int m=0,ld;
    while(n!=0)
    {
        ld=n%10;
        m=m*10+ld;
        n=n/10;
    }
    return m;
}
