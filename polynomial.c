#include<stdio.h>
#define val 50
struct polynomial
{
int expo;
int coeff;
};
int main(){
struct polynomial A[val];
int power,i,k=0;
printf("\n Enter the highest degree of first polynomial");
scanf("%d",&power);
for(i=0;i<=power;i++)
{
printf("/n Enter the coefficient of x^%d :",i);
scanf("%d",&A[i].coeff);
A[k++].expo=i;
}
printf("The Polynomial is: ");
for(i=0;i<=power;i++)
{
printf("%d(x^%d)",A[i].coeff,A[i].expo);
if(power!=i)
{
printf("+");
}
}
return 0;
}

