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
    struct node* new = (struct node*)malloc(sizeof(struct node));
    // save the value
    new->value = value;
    new->next = NULL;
    // return new node
    return new;
}

struct linkedlist* new_linkedlist()
{
    // make new linkedlist
    struct linkedlist* new = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    // initialize
    new->header = NULL;
    new->tail = NULL;
    new->size = 0;
    // return linkedlist

    return new;
}

int size(struct linkedlist* list)
{
    // return size of linkedlist 
    return list->size;
}

int empty(struct linkedlist* list)
{
    // if list empty return 1 else return 0
    if(!size(list))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insert(struct linkedlist* list, struct node* new)
{
    // insert new_node to end of linkedlist
    // if there is tail
    if(empty(list))
    {
        list->header = new;
        list->tail = new;
    }
    else
    {
        list->tail->next = new;
        list->tail = list->tail->next;
    }
    list->size++;
    // if there is no tail
    /*
    struct node* end = list->header;
    while(end!=NULL)
    {
        end = end->next;               
    }
    end->next = new;
    */
}

int delete(struct linkedlist* list, int value)
{
    // delete node that have value we want
    // if delete successfully, than return 0
    // else return -1
    if(empty(list))
    {
        return -1;
    }
    struct node* head = list->header;
    if(head->value == value)
    {
        list->header = head->next;
        return 0;
    }
    while(head->next != NULL)
    {
        if(head->next->value == value)
        {
            head->next = head->next->next;
            return 0;
        }
        head = head->next;
    }
    return -1;
}

void print_list (struct linkedlist* list)
{
    // print all items
    struct node* now = list->header;
    while(now!=NULL)
    {
        printf("%d\n", now->value);
        now = now->next;
    }
}

int main()
{
    struct linkedlist* list = new_linkedlist();
    int i, n = 5;
    for(i=0; i<n; i++)
    {
        insert(list,new_node(i*10));
    }
    print_list(list);

    delete(list,10);
    print_list(list);
}