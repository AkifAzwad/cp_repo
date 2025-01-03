#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* next;
};

int length = 0;
node* head = NULL;

void prepend(int v)
{
    node* new_node = new node();
    new_node->val = v;
    new_node->next = head;

    head = new_node;

    length++;
}

void append(int v)
{
    if (head == NULL)
    {
        prepend(v);
        return;
    }

    node* new_node = new node();
    new_node->val = v;
    new_node->next = NULL;

    node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = new_node;
    length++;
}

void insert_after_a_pointer(node* pt, int v)
{
    if (pt == NULL)
    {
        printf("Pointer is NULL\n");
        return;
    }

    node* new_node = new node();
    new_node->val = v;
    new_node->next = pt->next;
    pt->next = new_node;
    length++;
}

void insert_after_a_value(int value,  int v)
{
    /// assume that all values are unique

    node* new_node = new node();
    new_node->val = v;
    new_node->next = NULL;

    node* tmp = head;

    while (tmp != NULL && tmp->val != value)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        printf("value not found !\n");
        return;
    }

    insert_after_a_pointer(tmp, v);
}

void insert_after_nth_node(int n, int v)
{
    if (n > length)
    {
        printf("n (%d) is greater than the size (%d) of the linked list.\n", n, length);
        return;
    }

    node* new_node = new node();
    new_node->val = v;
    new_node->next = NULL;

    node* tmp = head;
    int cnt = 1;

    while (tmp != NULL && cnt < n)
    {
        tmp = tmp->next;
        cnt++;
    }

    insert_after_a_pointer(tmp, v);
}

void print_ll()
{
    node* tmp = head;
    while (tmp != NULL)
    {
        printf("%d, ", tmp->val);
        tmp = tmp->next;
    }
    printf("\n\n");
}


void delete_first_node()
{
    if (length == 0)
    {
        printf("Linked List is empty...can't delete!\n");
        return;
    }

    node* tmp = head;
    head = head->next;
    delete(tmp);
    length--;
}

void delete_last_node()
{
    if (length == 0)
    {
        printf("Linked List is empty...can't delete!\n");
        return;
    }

    if (length == 1)
    {
        delete_first_node();
        return;
    }

    node* tmp = head;
    node* pt2 = tmp;
    while (tmp->next != NULL)
    {
        pt2 = tmp;
        tmp = tmp->next;
    }

    pt2->next = NULL;
    delete(tmp);
    length--;
}

void delete_a_pointer()
{

}

void delete_a_node_with_a_value()
{

}

void delete_nth_node()
{

}

int main()
{
    append(5);
//    append(6);
//    append(7);
//    append(8);

    delete_last_node();

    print_ll();

    return 0;
}