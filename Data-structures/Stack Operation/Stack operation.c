#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define SIZE 10
int top=-1;
int stack[SIZE];

void push(int value){
if(top ==( SIZE-1)){
printf("\nStack is Full!!! Insertion is not possible!");}
else{
top++;
stack[top] = value;
printf("\nInsertion success!");
}
}

void pop(){
if(top == -1){
printf("\nStack is Empty!!! Deletion is not possible!");}
else{
printf("\nDeleted : ", stack[top]);
top--;
}
}

void display(){

if(top == -1){
printf("\nStack is Empty!");}
else{
int i;
printf("\nStack elements are:");
for(i=top; i>=0; i--){
printf("%d\n",stack[i]);}
}
}




void main()
{
int value, choice;

while(1){
printf("\n\n**** MENU ****");
printf("1. Push\n2. Pop\n3. Display\n4. Exit");
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
case 4: exit(0);
default: printf("\nWrong selection!!Try again!!");
}
}
}

