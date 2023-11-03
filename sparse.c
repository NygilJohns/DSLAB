#include<stdio.h>
void main()
{
int i,j,row,col,k=1,count=0;
printf("Enter the order of matrix :");
scanf("%d%d",&row,&col);
int s[row][col];
printf("Enter the elements in the matrix :");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&s[i][j]);
}}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",s[i][j]);
}
printf("\n");
}


struct sparse
{
int row,col,value;
}a[10];
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(s[i][j]!=0)
{
a[k].row=i;
a[k].col=j;
a[k].value=s[i][j];
k++;
count++;
}}
a[0].row=row;
a[0].col=col;
a[0].value=count;
}
printf("\n Tuple matrix representation :\n");
for(i=0;i<k;i++)
{

printf("%d\t%d\t%d\t",a[i].row,a[i].col,a[i].value);
printf("\n");
}

}


