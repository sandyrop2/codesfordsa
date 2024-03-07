#include<stdio.h>
void ac(float ,float *,float *);
main()
{
    float r,a,c;
    printf("enter the radius\n");
    scanf("%f",&r);
    ac(r,&a,&c);
    printf("area=%f and circumference = %f",a,c);
}
void ac(float r,float *a,float *c)
{
    *c=2*3.142*r;
    *a=3.142*r*r;
}
