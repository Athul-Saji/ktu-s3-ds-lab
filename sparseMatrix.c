#include<stdio.h>
void main()
{
int i,j,row,col,k=0;
int b[30][3];//sparse matrix

printf("Enter number of rows and columns:\n");
scanf("%d %d",&row,&col);
int a[row][col];

printf("Enter Matrix:\n");
for(i=0;i<row;i++){
   for(j=0;j<col;j++){
   scanf("%d", &a[i][j]);
   }
}
b[0][0]=row;
b[0][1]=col;

for(i=0;i<row;i++){
   for(j=0;j<col;j++){
      if(a[i][j]!=0){
      k++;
      b[k][0]=i;
      b[k][1]=j;
      b[k][2]=a[i][j];
      
      }
   }
}
b[0][2]=k;

printf("Result Matrix:\n");
for(i=0;i<row;i++){
   for(j=0;j<col;j++){
   printf("%d ",a[i][j]);
   }
   printf("\n");
}

printf("Sparse Matrix: \nRow\tColumn\tNon-Zero\n");
for(i=0;i<=k;i++){

printf("%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]);
}
}   
      
   

