#include<stdio.h>
void read(int[100][100],int,int);
void dis(int [100][100],int,int);
void dup(int[100][100],int,int);
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
    }
    printf("\n");
}
void dup(int a[100][100],int r,int c)
{
    int i,j,s;
    for(j=0;j<c;j++)
    {

        for(i=0;i<r;i++)
        {
            if(i==j)
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}

