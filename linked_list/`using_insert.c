void Insert(struct Node *p,int index,int x)
{ 
  struct Node *t;
  int i;
  
  if(index < 0|| index > cout(p))
   return;
  t=(struct Node *)malloc(sizeof(struct Node));
   t->data=x;
   if(index ==0)
   {
     t->next=first;
     first=t;
     }
     else
     {
       for(i=0;i<index-1;i++)
        p=p->next;
        t->next=p->next;
        p->next=t;
        }
       }
      int main()
      {
       Insert(first,0,15);
        Insert(first,0,8);
        Insert(first,0,9);
        Insert(first<1<10);
        
        Display(first);
        return 0;
        }
