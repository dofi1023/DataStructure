#include <stdio.h>
#include <malloc.h>

struct stack
{
    int* item;
    int size;
    int maxsize;
};

struct stack* new_stack()
{
    // make new stack

    // initializing

    // return stack 

}

int size(struct stack* s)
{
    // return stack size
    return s->size;
}

int empty(struct stack* s)
{
    // if stack is empty return 1 else return 0
}

int full(struct stack* s)
{
    
}

int top(struct stack* s)
{
    // return top of stack 
}

void push(struct stack* s, int val)
{
    // push to stack 
    // if stack is full, than expand the size with realloc
}

int pop(struct stack* s)
{
    // pop and return the value of stack

}

int main()
{
    struct stack* s = new_stack();
    int i,n = 5;
    for(i=0; i<n; i++)
    {
        push(s,i);
        printf("%d\n", top(s));
    }
    printf("%d\n", pop(s));
    printf("%d\n", size(s));

    return 0;
}