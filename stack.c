#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int i,n,max=7,top=-1;
void push(int[],int);
void pop(int[],int);
void display(int a[max],int n)
{
printf("Result Array:\n");
for(i=0;i<n;i++)
{
printf("%d", a[i]);
}
}
int main()
{
int n,op;
int a[max];
do{
printf("\nEnter Option:\n");
printf("1:PUSH \t2:POP \t3:EXIT\n");
scanf("%d",&op);
if(op==1){
push(a,top);
top++;
}
else if(op==2){
pop(a,top);
top--;
}
}
while(op!=0);
}
void push(int a[max],int top)
{
if(top==max)
{
printf("Stack is full");
}
else
{
top++;
printf("Enter the value: ");
scanf("%d",&a[top]);

printf("\nResult stack:\n");
for(i=0;i<=top;i++)
{
printf("%d\n",a[i]);
}
}
}
void pop(int a[max],int top)
{
if(top==-1)
{
printf("Stack is empty");
exit(0);

}
else
{
printf("Element to delete: %d",a[top]);
top--;
printf("\nResult Stack: \n");
for(i=0;i<=top;i++)
{
printf("%d\n",a[i]);
}
}
}
