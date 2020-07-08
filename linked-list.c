/*  LINKED LIST PROGRAM IN C, TO INSERT NODE AT THE END OF THE LIST   "ALL THE BEST CODERS" */

#include <stdio.h>
#include<stdlib.h>


   struct node                                      //NODE DECLARATION;
   {
       int data;
       struct node* next;
   };
   
   struct node* head;                               
   struct node* temp;
   
   void  insert(int x)                                                  //FUNCTION TO CREATE AND LINK NODES;
   {
        struct node* temp1 = (struct node*)malloc(sizeof(struct node));
        temp1->data = x;
        temp1->next = NULL;
        if(head == NULL)
        {
            head = temp1;
        }
        else
        {
            temp->next = temp1;
        }
        temp = temp1;
   }
   
   void print()                                                     //TO PRINT THE NODE;
   {
       struct node* temp2 = head;
       printf("list is : ");
       while(temp2 != NULL)
       {
            printf("%d ", temp2->data);
            temp2 = temp2->next;
       }
       printf("\n");
   }
   
   
   int main()
   {
       int n,x,i;
       head = NULL;
       printf("how many number : ");
       scanf("%d", &n);
       for(i=0; i<n; i++)
       {
           printf("enter number : ");
            scanf("\n%d", &x);
            insert (x);
            print();
       }
   }
