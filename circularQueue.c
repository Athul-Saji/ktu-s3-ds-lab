#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
void enqueue(int);
void dequeue();
void display();

void main()
{
int ch=1,x;
while(ch<4 && ch!=0)
{
printf("1: Insert\n");
printf("2: Delete\n");
printf("3: Display\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter element to be inserted\n");
scanf("%d",&x);
enqueue(x);
break;
case 2:
dequeue();
break;
/*case 3:
display();
break;*/
}
}
}

void enqueue(int element)
{
if(front==-1 && rear==-1)
{
  front=0;
  rear=0;
  queue[rear]=element;
}
else if((rear+1)%MAX==front)
{
   printf("\nQueue is overflow\n");
}
else
{
rear=(rear+1)%MAX;
queue[rear]=element;
}
display();
}
void dequeue()
{
if((front==-1)&&(rear==-1))
{
printf("\nQueue is underflow\n");
}
else if(front==rear)
{
printf("\nThe dequeued element is %d\n",queue[front]);
front=-1;
rear=-1;
}
else
{
printf("\nThe dequeued element is %d\n",queue[front]);
front=(front+1)%MAX;
}
display();
}
void display()
{
int i;
if(front==-1 && rear==-1)
{
printf("\nQueue is empty\n");
}
else
{
printf("\n");
printf("\nThe Queue is: \n");
for(i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
}
}

