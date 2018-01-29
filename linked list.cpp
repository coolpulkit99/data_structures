#include <stdio.h>
#include <stdlib.h>
#include <exception>
struct node {
int val;//=0;
struct node *next;

} *start;

void pinsert(int);
void display();
void search();
void Binsert();
int main(){
	start=0;
	int option=0;
	while(true)
	{
		
		printf("\tMenu\n1.Insert\n2.Delete\n3.Search\n4.Display All\n5.Exit\n");
		scanf("%d",&option);
		switch(option)
		{
		case 1://Insert a member
		printf("Enter the number to insert.\n");
		//scanf("%d",&ins);
		//pinsert(1);
		Binsert();
		break;
		case 2://Delete and Display deleted member
		printf("Enter the number to delete.\n");
	
		break;
		case 3://Display positionof element
		printf("Enter the number to search.\n");
		search();
		break;
		case 4://Display list members
		printf("The list is:\n");
		display();
		break;
		case 5:printf("Thank You!");exit(1);break;
		//testing pinsert
			case 6:pinsert(5);break;
		case 0:
		default:printf("Select an option.\n");break;
		
		}
	}
	return 0;
}
void pinsert(int pos)
{
int val=0;
	struct node *nnode;
	struct node *iterate;
	scanf("%d",&val);
	nnode=(struct node*)malloc(sizeof(struct node ));
	nnode->val=val;
	nnode->next=0;
	int i=1;
	iterate=start;
	while(i<pos-1 and iterate->next!=0)
	{
	iterate=iterate->next;
		i++;
	}
	nnode->next=iterate->next;
	iterate->next=nnode;

}
void display(){
	struct node *iter;
	iter=start;
	while(iter!=0){
		printf("\n%d\n",iter->val);
		iter=iter->next;
	}
}

void search(){
	int val=0;
	scanf("%d",val);
	struct node *iter;
int counter=0;
	iter=start;
	while(iter!=0 and iter->val!=val){
		iter=iter->next;
		counter++;
	}
	if(iter->val==val)
	printf("%d at position %d.",val,counter);
	else
	printf("Not present in list.");
	
}

void Binsert()
{
 struct node *nnode;
 int val;
 scanf ("%d", &val);
 nnode = (struct node*) malloc(sizeof(struct node));
 nnode -> val = val;
 nnode -> next = 0;
 if (start == 0)
 start = nnode;
 else
{
nnode -> next = start;
 start = nnode;
}
}
