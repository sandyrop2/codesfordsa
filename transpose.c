#include<stdio.h>
void read(int a[100][100],int,int);
void dis(int a[100][100],int,int);
void dup(int a[100][100],int,int);
main()
{
    int r,c,a[100][100];
    printf("enter the number of rows and column\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    dis(a,r,c);
    dup(a,r,c);

}
void read(int a[100][100],int r,int c)
{
    int i,j;
    printf("enter the values\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
}
void dis(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);

    printf("\n");
    }

}
void dup(int a[100][100],int r,int c)
{
    int i,j,t[100][100];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            t[j][i]=a[i][j];
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",t[i][j]);
    }
}
