#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void printList(struct Node **head_ref){
    struct Node *temp=(*head_ref);
      if(temp==NULL){
        printf("Empty list\n");
        return;
      }
      while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
      }
        printf("\n");

}
void push( struct Node **head_ref,int new_data){
         struct Node *new_node =  (struct Node*)malloc(sizeof(struct Node));
         new_node->data=new_data; 
         if((*head_ref)==NULL){
            (*head_ref)=new_node;
            new_node->next=NULL;
            return;
         }
         else{
            new_node->next=(*head_ref);
            (*head_ref)=new_node;
         }
}
void append(struct Node **head_ref,int new_data) {
  struct Node *temp=(*head_ref);
  struct Node *new_node =  (struct Node*)malloc(sizeof(struct Node));
   new_node->data=new_data;
   new_node->next=NULL;
   if(temp==NULL){
    (*head_ref)=new_node;
    return;
   }
   while(temp->next!=NULL){
        temp=temp->next;
   }
   temp->next=new_node;
   
}
void insertafter(struct Node **head_ref,int prev_data,int new_data){
        struct Node *prev = (*head_ref);
        struct Node *new_node =  (struct Node*)malloc(sizeof(struct Node));
        new_node->data=new_data;
        if((*head_ref)==NULL){
          (*head_ref)=new_node;
          new_node->next=NULL;
          return;
        }
        while(prev && prev->data != prev_data){
               prev=prev->next;
        }
        if(prev==NULL)
          printf("cannot insert\n");
        else
        {
             new_node->next=prev->next;
             prev->next=new_node;
        }
}
void delete(struct Node **head_ref,int ele){
  struct Node *temp = (*head_ref);
  struct Node *prev = NULL;
  if(*head_ref==NULL){
    printf("List Empty");
    return;
  }
  if((*head_ref)->data == ele){
     (*head_ref)=temp->next;
     free(temp);
     return;
  }
  while(temp->next!=NULL){
     if(temp->data == ele){
          prev->next = temp->next;
          free(temp);
          return;
      }
        prev=temp;
        temp=temp->next;
  }
}
void swap(struct Node **head_ref,int ele1,int ele2){
  struct Node *ptr1=(*head_ref);
  struct Node *ptr2=(*head_ref);
  struct Node *prev1=NULL;
  struct Node *prev2=NULL;
  if((*head_ref)==NULL){
     printf("Empty list cannot swap");
 }
  while(ptr1->data!=ele1){
       prev1=ptr1;
       ptr1=ptr1->next;
  }
  if(prev1==NULL){

  }
  while(ptr2->data!=ele2){
       prev2=ptr2;
       ptr2=ptr2->next;
  }
  if(prev1==NULL){
          prev1=ptr1->next;
          prev2->next=ptr1;
          ptr1->next=ptr2->next;
          ptr2->next=prev1;
          (*head_ref)=ptr2;
  }
  struct Node *temp=ptr2->next;
  prev2->next=ptr1;
  prev1->next=ptr2;
  ptr2->next=ptr1->next;
  ptr1->next=temp;
  
}
int main(){
    struct Node *head = NULL;
    push(&head,20);
    push(&head,30);
    push(&head,40);
    printList(&head);
    append(&head,100);
    printList(&head);
    insertafter(&head,40,60);
    printList(&head);
    delete(&head,60);
    printList(&head);
    swap(&head,30,100);
    printList(&head);
    swap(&head,40,20);
    printList(&head);
    return 0;
}