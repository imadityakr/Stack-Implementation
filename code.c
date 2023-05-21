#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE],top=-1,i,item;
void push()
{
    if(top==SIZE-1)
    printf("Stack overflow\n");
    else
    {
        printf("Enter the elements\n");
        scanf("%d",&item);
        stack[++top]=item;
    }
}
void pop()
{
    if(top==-1)
    printf("Stack overflow\n");
    else
    printf("The element deleted is %d\n",stack[top--]);
}
void display()
{
    if(top==-1)
    printf("Stack underflow\n");
    else
    {
        printf("The contents of stack are\n");
        for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: push();
            break;
            
            case 2: pop();
            break;

            case 3: display();
            break;

            default: printf("Invalid choice\n");
            exit(0);
            break;
        }
    }
}
