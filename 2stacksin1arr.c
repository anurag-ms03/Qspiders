#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct stack{
  int top1;
  int top2;
  unsigned size;
  int *arr;
};
struct stack* initialize(unsigned size){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=size;
    s->top1=-1;
    s->top2=size;
    s->arr=(int*)malloc(s->size * sizeof(int));
    return s;
}
void push1(struct stack* s,int data){
    if (s->top1 == ((s->size)/2)-1){
        printf("stack overflow\n");
        return;
    }
    s->top1=s->top1+1;
    s->arr[s->top1]=data;
    return;
}
void push2(struct stack* s,int data){
    if (s->top2 == (s->size)/2){
        printf("stack overflow\n");
        return;
    }
    s->top2=s->top2-1;
    s->arr[s->top2]=data;
    return;
}
/*int pop(struct stack* s){
    int ele;
    if(s->top==-1){
        printf("stack is empty\n");
        return INT_MIN;
    }
    ele = s->arr[s->top];
    s->top=s->top-1;
    printf("\nthe popped element is %d\n",ele);
}

void peek(struct stack* s){
    if(s->top==-1){
        printf("stack is empty\n");
        return;
    }
    printf("\nthe top element is %d \n",s->arr[s->top]);
}
*/
void printStack1(struct stack* s){
    if(s->top1==-1){
        printf("stack underflow\n");
        return;
    }
    for(int i=s->top1;i>-1;i--){
        printf("%d ",s->arr[i]);
    }
    printf("\n");
}
void printStack2(struct stack* s){
    if(s->top2==(s->size)){
        printf("stack underflow\n");
        return;
    }
    for(int i=s->top2;i<s->size;i++){
        printf("%d ",s->arr[i]);
    }
    printf("\n");
}
int main(){
    struct stack *s=initialize(10);
    push1(s,10);
    push1(s,30);
    push1(s,40);
    push1(s,20);
    push2(s,20);
    push2(s,30);
    push2(s,40);
    push2(s,20);
    printStack1(s);
    printStack2(s);
    return 0;
}
