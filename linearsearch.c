#include<stdio.h>
void main()
{
int n,i,flag=0,x,count=0;
count++;
count++;
printf("Enter the no.of variables :");
scanf("%d",&n);
count++;
int arr[n];
printf("Enter the number :");

for(i=0;i<n;i++)
{
count++;
scanf("%d",&arr[i]);
count++;
}
count++;
printf("Enter a number:");
scanf("%d",&x);
count++;

for(i=0;i<n;i++)
{
count++;
if (arr[i]==x)
{count++;
flag++;
}
}
count++;
if (flag>0)
{
count++;
printf("%d is present\n",x);
count++;
}
else{
count++;
printf("%d is not present\n",x);
count++;
}
count++;
count++;
printf("The time complexity =%d\n",count);
printf("The space complexity =%d",20+4*n);
}
