#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct stack{
int size;
int top;
int *arr;	
};
int isEmpty(struct stack* ptr){
	if(ptr->top==-1){
	return 1;
	}else{
		return 0;
	}}
int isfull(struct stack * ptr)
{
	if(ptr->top==ptr->size - 1){
	return 1;
	}else{
		return 0;
	}
} 
void push(struct stack* ptr , int val){
	if(isfull(ptr)){
		printf("Stack overflow!  cannot push %d to the stack\n",val);
	}else{ptr->top++;
	ptr->arr[ptr->top]=val;
	}
} 
int pop(struct stack* ptr ){
	if(isEmpty(ptr)){
		printf("Stack underflow!  cannot pop  from the stack\n");
		return -1;
	}else{
	  int val = ptr->arr[ptr->top];//we written a value
	  // ptr arr kaa ptr topmost element hogaa and store value in val
	  ptr->top--;//ab isko nichhe laane ka
	  return val;//return in value
	}}
 int main(){
	struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
	sp->size=90;
    sp->top=-1; // means The element is empty
    sp->arr=(int*)malloc(sp->size*sizeof(int));//size multiply by size of int bcz array store integers
	printf("Stack has been created successfully\n");	
	printf("Befor pushing,full :%d\n",isfull(sp));
		printf("Befor pushing,empty : %d\n",isEmpty(sp));
//	printf("%d",is(sp));
push(sp,1);
push(sp,2);
push(sp,3);
push(sp,4);
push(sp,5);
push(sp,6);
push(sp,7);
push(sp,8);
push(sp,9);
push(sp,10);//---->pushed 10 values
push(sp,11); // stack overflow since the size of the stack is 10
printf("After pushing,full :%d  \n",isfull(sp));
printf("After pushing,%d\n",isEmpty(sp));
printf("After pushing,empty : %d \n",isEmpty(sp));
printf("popped %d from the stack \n",pop(sp));
printf("popped %d from the stack \n",pop(sp));	//last in firsr out/gaayab no.s
	return 0;
}
