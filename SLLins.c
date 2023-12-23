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
    return 0;
}