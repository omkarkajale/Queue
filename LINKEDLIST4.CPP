#include<Stdio.h>
#include<stdlib.h>
struct ndt{
	int data;
	struct ndt *next;
};
typedef struct ndt node;
void display(void);
void create(void);
void insert(void);
void findmax(void); 
node *start;
int main(){
	int choice;
	do{
	             	printf("\tThis is a program to implement Linked List\n");
		printf("press 1 for creation \n");
			printf("press 2 for insert \n");
		printf("press 3 for display \n");
			printf("press 4 for max \n");
		printf("press 5 for exit\n");
		scanf("%d",&choice);
		switch(choice){
	  	case 1: create();break;
		case 2: insert();break;
		case 3: display();break;
		case 4: findmax(); break;
		case 5: exit(0); break;
	} }while(1);
	return 3;}
	             
				 void display(void){
		node *temp1;
		temp1 = start;
		printf("START\n");
		while(temp1!=NULL){
			printf("%d-->",temp1->data);
			temp1 = temp1->next;}
			printf("\nEND\n");}
			
		               	void create(void){
				node *temp;
				temp = (node*)malloc(sizeof(node));
				if(temp!=NULL){
					printf("Enter value for data\n");
					scanf("%d",&temp->data);
					start=temp;
					temp->next=NULL;
				}
			      else{
		printf("Memory could not allocated by operating\n");
				}
		}
		void insert(void){
			node *temp;
			node *temp1 =start;
			while(temp1->next!=NULL){
				temp1 =temp1->next;
			}
	temp=(node*)malloc(sizeof(node));
		if(temp==NULL){
			printf("Memory cannot allocate \n");
		}      else{
			printf("\nEnter Data\n");
			scanf("%d",&temp->data);
		     temp->next=NULL;
	  temp1->next =temp;
				 }
			 }
			 void findmax(void){
			 	struct ndt  *temp;
			 	temp = start;
			 	int max =0;
			 	while(temp!=NULL){
			 		if(temp->data>=max){
			 			max = temp->data;
					 }
					 temp  =temp->next;
				 }
				 printf("%d",max);
			 }
		
