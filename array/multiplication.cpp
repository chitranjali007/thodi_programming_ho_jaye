#include<stdio.h>
#include<stdlib.h>
void ortho(int **a3,int row)
{ int flag=0;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<row;j++)
    {
      if(i==j)
      {
        if(a3[i][j]!=1)
        {flag=1;
         break;
        }        
      }   
      else
      {
        if(a3[i][j]!=0)
        {flag=1;
          break;
        }    
      }     
    }        
  }     
  if(flag==0)
  printf("\n given matrix is orthogonal:)");
  else
  printf("\n given matrix is not orthogonal:(");
     
}
void multi(int **a1,int **a2,int row,int col)
{  
  int **a3;
 a3=(int **)malloc(sizeof(int)*row);
 for(int i=0;i<row;i++)
 {
   a3[i]=(int *)malloc(sizeof(int)*row);
 }     
 for(int i=0;i<row;i++)
 {
   for(int j=0;j<row;j++)
   {
     a3[i][j]=0;
     for(int k=0;k<col;k++)
     {
       a3[i][j]=a3[i][j]+(a1[i][k]*a2[k][j]);        
     }        
   }        
 }
ortho(a3,row);
     
}
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
multi(a1,a2,row,col); 
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
