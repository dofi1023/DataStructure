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
    struct stack * new_s = (struct stack*)malloc(sizeof(struct stack));
    // initializing
    new_s->item = (int*)malloc(sizeof(int));
    new_s->size = 0;
    new_s->maxsize = 1;
    // return stack 
    return new_s;
}

int size(struct stack* s)
{
    // return stack size
    return s->size;
}

int empty(struct stack* s)
{
    // if stack is empty return 1 else return 0
    if(size(s) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full(struct stack* s)
{
    if(s->size == s->maxsize)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int top(struct stack* s)
{
    // return top of stack
    return s->item[s->size-1]; 
}

void push(struct stack* s, int val)
{
    // push to stack 
    // if stack is full, than expand the size with realloc
    if(full(s))
    {
        realloc(s->item,sizeof(int) * s->maxsize*2);
        s->maxsize = s->maxsize*2;
    }
    s->item[s->size ++] = val;
}

int pop(struct stack* s)
{
    // pop and return the value of stack
    int top_item = top(s);
    s->size--;
    return top_item;
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