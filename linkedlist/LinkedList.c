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
    struct node*n_node = (struct node*)malloc(sizeof(struct node));
    // save the value
    n_node->next = NULL;
    n_node->value = value;
    // return new node
    return n_node;
}

struct linkedlist* new_linkedlist()
{
    // make new linkedlist
    struct linkedlist*newlink= (struct linkedlist*)malloc(sizeof(struct linkedlist));
    // initialize
    newlink->header = NULL;
    newlink->tail = NULL;
    newlink->size = 0;
    // return linkedlist
    return newlink;

}

int size(struct linkedlist* list)
{
    // return size of linkedlist
    return list->size;
}

int empty(struct linkedlist* list)
{
    // if list empty return 1 else return 0
    if (list == '\0')
        return 1;
    else
        return 0;
}

void insert(struct linkedlist* list, struct node* new_node)
{
    // insert new_node to end of linkedlist
    if (empty(list) {
        list->header = newlink;
        list->tail = newlink;
    }
    else {
        tail->next = newlink;
        list->tail = tail->next;
    }
    // if there is tail
    

    // if there is no tail
    struct node* end = list->header;
    while (end->next != NULL)
    {
        end = end->next;
    }
    end->next = newlink;
    
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
    while (head->next != NULL) {

     
    }
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