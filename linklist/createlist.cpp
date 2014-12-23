#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
  struct list{
                  char *name;
                  int age;
                  struct list *next;
            
                 }list1;
void print(struct list *nm)
{
     printf("\n name: ",nm->name);
     printf("\n Age: ",nm->age);
     }
void create(struct list *nm,struct list list1)
{
     printf("\n enter name: ");
     scanf("%c",&list1.name);
     printf("\n enter age: ");
     scanf("%d",&list1.age);
     nm->name=list1.name;
     nm->age=list1.age;
     nm->next=NULL;
     print(nm);
     
     }
int main()
{
   
   struct list *start,*p,*r;
   start=(struct list*)malloc(sizeof(struct list));
   create(start,list1);
   getch();
   return 0;
    
    }
