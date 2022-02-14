#include<stdio.h>
void main()
{

int s,i,size;int flag=0;int count;
printf("Enter size of array\n");
scanf("%d",&size);
count+2;
int a[size];
printf("Enter the array elements\n");
count++;
for(i=0;i<size;i++,count++)
{
    scanf("%d",&a[i]);
    count++;
}
printf("Enter the element to be searched\n");
scanf("%d",&s);
count+2;
for(i=0;i<size;i++,count++)
{
if(a[i]==s)
{
count++;
printf("Search successful");
count++;
flag=1;
count++;
break;
}
count++;
}
if(flag==0){
count++;
printf("Search Unsuccessful!!");
count++;
}
count++;
printf("\nTime Complexity : %d",count);
printf("\nThe space complexity is: %lu", 20+sizeof(a[size]));
}

