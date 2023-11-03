#include<stdio.h>
int top=-1,max_size,item,a[50],front=0,choice;
void push();
void pop();
void peek();
void display();
void main()
{
 printf("Enter the limit :");
 scanf("%d",&max_size);
 
 while(choice!=5)
 {
 printf("\n1.Push \n2.Pop \n3.Peek \n4.Display \n5.exit\nEnter the choice :");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1 :
  {
 push();
 break;
 }
 case 2:
 {
 pop();
 break;
 }
 case 3:
 {
 peek();
 break;
 }
 case 4:
 {
 display();
 break;
 }
 case 5:
 {
 printf("Exit");
 break;
 }
 }}}
 void push()
 {
 if(top==(max_size-1))
 {
 printf("Stack OVERFLOW");
 }
 else{
 top=top+1;
 printf("Enter the number :");
 scanf("%d",&item);
 a[top]=item;
 
 }
 }
 void pop()
 {
 if(top==-1)
 {
 printf("Stack UNDERFLOW");
 }
 else{
 item=a[top];
 top=top-1;
 }
 }
 void peek()
 {
if(top==-1)
printf("underflow");
else
printf("Topmost element = %d\n",a[top]);
}
void display()
{
if(top==-1){

printf("Underflow");
}
else
{

printf("Elements in the array :");
for(int i=0;i<=top;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
}


