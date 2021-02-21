void SortedInseert(struct Node *p,int x)
{
 struct Node *t,*q=NULL;
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=x;
 t->next=NULL;
 
 if(first=NULL)
  first=t;
 else
 {
  while(p && p->data<x)
   { 
     q=p;
     p=p->next;
     }
     if(p==fist)
     {
      t->next=first;
      first=t;
      }
      else
      { 
        t->next=q->next;
        q->next=t;
        }
       }
      }
      inr main()
      {
       int A[]={10,20,30,40,50]
       create(A,5);
       printf("%d\n"SortedInsert(first,15));
       Display(first);
       retuen 0;
       }
      
