#include<stdio.h>
void main()
{
int i,j,limit,min_index,count=0,temp;
count++;
printf("Enter the limit :");
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
for(i=0;i<limit;i++)
{
count++;
min_index=i;
count++;
for(j=i+1;j<limit;j++)
{
count++;
if(a[min_index] > a[j]) 
{ 
count++;
min_index = j; 
count+=2;              
 }
 count++;
 }
 
 
  temp = a[i];
  count++;
 a[i] = a[min_index];
 count++;
 a[min_index] = temp;
 count+=2;
 
 }
  
    
    printf("Sorted Array: ");
    for( i=0; i<limit; i++) 
    {
    count++;
      printf(" %d", a[i]);
      count++;
    }
    count+=2;
    printf("\n The time complexity = %d",count);
    printf("\n The space complexity =%d",(20+(4*limit)));
    }
 
                

