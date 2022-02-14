#include<stdio.h>
void main(){
int expo[50];int coeff[50];
int power,i=0,k=0;
printf("\n Enter the highest degree of first polynomial");
scanf("%d",&power);
while(i<=power)
{
printf("Enter the exponent\n");
scanf("%d",&expo[i]);
if(expo[i]<=power){
if(expo[i]>0){
printf("Enter the coefficeint\n");
scanf("%d",&coeff[i]);
i++;
}
i++;
}

}
i=0;
while(i<=power)
{
printf("%dx^%d+",coeff[i],expo[i]);
i++;
}
}
