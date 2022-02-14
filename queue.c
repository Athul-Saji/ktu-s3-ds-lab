#include<stdio.h>
#include<stdlib.h>
#define MAX 2

void insert();
void delete();
void display();
int q[MAX];
int rear=-1;
int front=-1;
void main()
{
int ch;
while(1)
{
printf("1: Insert element to queue\n");
printf("2: Delete element fron queue\n");
printf("3: Display all elements of queue\n");
printf("4: To exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong Choice\n");
}
}
}
void insert()
{
int add;
if(rear==MAX-1)
printf("Queue Overflow\n");
else
{
if(front==-1)
front=0;
printf("Insert the element in queue\n");
scanf("%d",&add);
rear=rear+1;
q[rear]=add;
}
}
void delete()
{
if(front==-1 || front>rear)
{
printf("Queue Underflow\n");
return;
}
else
{
printf("Element deleted front queue is: %d\n",q[front]);
front=front+1;
}
}
void display()
{
int i;
if(front==-1)
   printf("Queue is empty\n");
else
{
printf("Queue is: \n");
for(i=front;i<=rear;i++){
printf("%d",q[i]);
printf("\n");
}

}
}
