#include<stdio.h>
void main(){
 int limit,i,j,temp;
 printf("enter the limit\n");
 scanf("%d",&limit);
 int a[limit];
 printf("enter the numbers to be sorted\n");
 for(i=0;i<limit;i++){
   scanf("%d",&a[i]);
 }
 i=1;
 while(i<limit){
   j=i;
   while(a[j] < a[j-1]&&j>0){
       temp=a[j];
       a[j]=a[j-1];
       a[j-1]=temp;
       j=j-1;
       }
   i=i+1;
   }
  printf("sorted array:");
 for(i=0;i<limit;i++){
   printf("%d ",a[i]);
 }  
 }
 
