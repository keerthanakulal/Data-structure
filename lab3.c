#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int s[MAX];
int top=-1;
void push(int item)
{
	if(top==MAX-1)
	{
		printf("overflow\n");
	}
	else
	{
		top=top+1;
		s[top]=item;
	}
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("underflow\n");
	}
	else
	{
		item=s[top];
		printf("popped item:%d",item);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("stack elements are:");
		for(i=top;i>=0;i--)
		printf("%d\n",s[i]);
	}
}
void palindrome()
{
	int i,flag=1;
	printf("stack elements are:\n");
	for(i=top;i>=0;i--)
	printf("%d\n",s[i]);
	printf("reverse of stack elements are:\n");
	for(i=0;i<=top;i++)
	printf("%d\n",s[i]);
	for(i=0;i<=top/2;i++)
	{
		if(s[i]!=s[top-i])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("palindrome\n");
	}
	else
	printf("not palindrome\n");
}
void main()
{
	int choice,item;
	while(1){
	printf("\tMENU\n1.push\n2.pop\n3.palindrome\n4.display\n5.exit\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1:printf("enter element to be pushed:");
	   	     scanf("%d",&item);
	         push(item);
	         break;
		case 2:pop();
	         break;
		case 3:palindrome();
		       break;
		case 4:display();
	   	     break;
		case 5:exit(0);
					 break;
		default:printf("wrong choice\n");
			     break;
		}
	}
}



