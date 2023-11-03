#include<stdio.h>
void main()
{
struct poly
{
int exp,coef;
}x[40];
int limit,k=1;
printf("Enter the no.of terms in the equation :\n");
scanf("%d",&limit);
printf("Enter the coefficients and exponents clear:\n");
for(int i=0;i<limit;i++)
{
printf("term %d=",k);
scanf("%d%d",&x[i].coef,&x[i].exp);
k=k+1;
}
printf("The polynomial equation is :");
for(int i=0;i<limit;i++)
{
if(i<(limit-1))
printf("%dx^%d+",x[i].coef,x[i].exp);
else 
printf("%dx^%d",x[i].coef,x[i].exp);
}}


