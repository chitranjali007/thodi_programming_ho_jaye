#include <cstdlib>
#include <iostream>

using namespace std;
struct list
{
       int info;
       struct list*left;
       struct list*right;
};
struct dblist
{
       struct list *fnode;
       struct list *lnode;
};
struct list *create_node(int element)
{
       struct list *ptr;
       ptr=new list;
       ptr->info=element;
       ptr->right=NULL;
       ptr->left=NULL;
       return(ptr);
}
void insert_last(struct list*np,struct dblist*ns)
{
       if(ns->fnode==NULL)
       {
       ns->fnode=np;
       ns->lnode=np;
       }
       else
       {
           struct list *p;
           p=ns->fnode;
           while(p->right!=NULL)
           p=p->right;
           p->right=np;
           np->left=p;
           ns->lnode=np;
       }
}
void show(struct dblist *s)
{
           struct list *p;
           p=s->fnode;
           while(p!=NULL)
           {
                         cout<<p->info<<'\t';
                         p=p->right;   
           }
           cout<<'\n';
}
void concat(struct dblist*db1,struct dblist*db2)
{
     struct list*db;
     db=db1->fnode;
     while(db->right!=NULL)
     db=db->right;
     db1->lnode=db2->fnode;
     db->right=db2->fnode;
     db2->fnode->left=db;
     
}
int main(int argc, char *argv[])
{
    /*this is a program to concatnate two doubly linked lists*/
    struct list*q;
    struct dblist *db;
    struct dblist *db1;
    db->fnode=NULL;
    db->lnode=NULL;
    db1->fnode=NULL;
    db1->lnode=NULL;
    q=create_node(23);
    insert_last(q,db);
    q=create_node(20);
    insert_last(q,db);
    q=create_node(90);
    insert_last(q,db);
    q=create_node(58);
    insert_last(q,db);
    q=create_node(56);
    insert_last(q,db);
    show(db);
    cout<<'\n';
    q=create_node(34);
    insert_last(q,db1);
    q=create_node(67);
    insert_last(q,db1);
    q=create_node(89);
    insert_last(q,db1);
    q=create_node(7);
    insert_last(q,db1);
    q=create_node(11);
    insert_last(q,db1);
    cout<<"\n\n";
    concat(db,db1);
    system("PAUSE");
    return EXIT_SUCCESS;
}
