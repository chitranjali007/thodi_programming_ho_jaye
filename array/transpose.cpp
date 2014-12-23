#include<stdio.h>
#include<stdlib.h>

void transpo(int **a1,int row,int col)
{
   int **a2;
   a2=(int **)malloc(sizeof(int)*col);
   for(int i=0;i<col;i++)
   a2[i]=(int *)malloc(sizeof(int)*row);
   for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
    a2[j][i]=a1[i][j];        
  } 
         
  
} 
printf("\n transposed array is: \n");
for(int i=0;i<col;i++)
{
  for(int j=0;j<row;j++)
  {
    printf("%d ",a2[i][j]);        
  }        
  printf("\n");
} 
        
     
}
int main()
{
int **a,row,col;
printf("\n enter row and coloumn: ");
scanf("%d %d",&row,&col);                              
 a=(int **)malloc(sizeof(int)*row);
   for(int i=0;i<row;i++)
   a[i]=(int *)malloc(sizeof(int)*col);
printf("\n enter elements of array: \n");

for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
    scanf("%d",&a[i][j]);   
  } 
        

}    
transpo(a,row,col);
system("pause");
return 0;
}
