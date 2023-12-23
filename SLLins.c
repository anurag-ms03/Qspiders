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
      

}
void push( struct Node **head_ref,int new_data){
         struct Node *new_node =  (struct Node*)malloc(sizeof(struct Node));
         new_node->data=new_data; 
         if((*head_ref)==NULL){
            (*head_ref)=new_node;
            new_node->next=NULL;
         }
         else{
            new_node->next=(*head_ref);
            (*head_ref)=new_node;
         }
}
int main(){
    struct Node *head = NULL;
    push(&head,20);
    printList(&head);
}