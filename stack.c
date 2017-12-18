#include<stdio.h>
#include<conio.h>

#define SIZE 10

void push(int);
void pop();
void display();
void check();
int stack[10], top = -1;

void main()
{
   int value, choice;
   
   while(1){
   	system("cls");
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4.Check Even or odd\n5. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: check();
		 break;
	 
	 case 5: break;
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void push(int value){
   if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;
      stack[top] = value;
      printf("\nInsertion success!!!");
   }
   printf("\n");system("pause");
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
   printf("\n");system("pause");
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
   printf("\n");system("pause");
}
void check(){
if(top == -1)
      printf("\nStack is Empty!!!");
   else{if(stack[top]%2 == 0)
      printf("Top is even");
   else{
      printf("Top is odd");
      top--;
   }
}
printf("\n");system("pause");}
