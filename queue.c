#include <stdio.h>
//#include <stdio.h>
#include<stdlib.h>
 
#define MAX 5
 
int top=-1,t=-1,stack1[MAX],stack2[MAX];
void push();
void pop();
void display();
 
void main()
{
int ch;
while(1) 
{
printf("\n*** Stack Menu ***");
printf("\n\n1.enqueue\n2.push\n3.Display\n4.Dequeue\n5.Display2\n6.Exit");
printf("\n\nEnter your choice(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1: enqueue();
        break;
case 2: push();
        break;
case 3: display();
        break;
case 4: dequeue();
        break;
case 5: display2();
        break;
case 6: exit(0);
default: printf("\nWrong Choice");
}
}
}
void enqueue()
{
int val;
if(top==MAX-1 && t==MAX-1)
{
printf("\nqueue is full");
}
else
{
printf("\nEnter element to enqueue:");
scanf("%d",&val);
top=top+1;
stack1[top]=val;
}
}
 
void push()
{
if( t==MAX-1)
{
printf("\nqueue is overflow");
}
else
{
   // printf("\nDequeued element is %d",stack1[top]);
    t++;
    stack2[t]=stack1[top];
    printf("\npopped element is %d",stack1[top]);
top=top-1;
}
}
 
void dequeue()
{
if( t==-1)
{
printf("\nqueue is empty!!");
}
else
{
printf("dequeued element is-%d\n",stack2[t]);
t--;
}
}
void display()
{
if(top==-1 )
{
printf("\nqueue is empty!!");
}
else
{
printf("\nStack is...\n");
for(int i=top;i>=0;--i)
printf("%d\n",stack1[i]);
}
}
void display2()
{
if(t==-1 )
{
printf("\nqueue is empty!!");
}
else
{
printf("\nqueue is...\n");
for(int i=t;i>=0;--i)
printf("%d\n",stack2[i]);
}
}



