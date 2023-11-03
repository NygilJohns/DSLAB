#include<stdio.h>
void main()
{
int i,j,limit,temp,count=0;
count++;
printf("Enter the limit:");
scanf("%d",&limit);
count++;
int a[limit];
printf("Enter the numbers :");
for(i=0;i<limit;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}

for (i=0;i<limit;i++)
{
count++;
for (j=i+1;j<limit;j++)
{
count++;
if (a[i]>a[j])
{
count++;
temp=a[i];
count++;
a[i]=a[j];
count++;
a[j]=temp;
count++;
}}}
for(i=0;i<limit;i++)
{
count++;
printf("%d",a[i]);
count++;
}
count+=2;
printf("\n The time complexity =%d",count);
printf("\n The space complexity =%d",(20+(4*limit)));
}


