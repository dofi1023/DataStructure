#include <malloc.h>
#include <stdio.h>

struct node
{
    int value;
    struct node* next;    
};

struct linkedlist
{
    struct node* header;
    struct node* tail; // optional
    int size;
};

struct node* new_node(int value)
{
    // make new node
    
    // save the value

    // return new node
}

struct linkedlist* new_linkedlist()
{
    // make new linkedlist

    // initialize
   
    // return linkedlist

}

int size(struct linkedlist* list)
{
    // return size of linkedlist 
    
}

int empty(struct linkedlist* list)
{
    // if list empty return 1 else return 0
    
}

void insert(struct linkedlist* list, struct node* new_node)
{
    // insert new_node to end of linkedlist
    // if there is tail
    

    // if there is no tail
    
}

int delete(struct linkedlist* list, int value)
{
    // delete node that have value we want
    // if delete successfully, than return 0
    // else return -1
    
}

void print_list (struct linkedlist* list)
{
    // print all items
}

int main()
{
    struct linkedlist* list = new_linkedlist();
    int i, n = 5;
    for(i=0; i<n; i++)
    {
        insert(list,i*10);
    }
    print_list(list);

    delete(list,10);
    print_list(list);
}