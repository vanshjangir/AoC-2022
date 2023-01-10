#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int val;
    node *link;
};

node *start = NULL;

node* create(){
    node* n = new node;
    return n;}

void insert(int x){
    node *temp = create() , *t;
    temp->link = NULL;
    temp->val = x;

    if(start == NULL)
        start = temp;
    else
    {
        t = start;
        while(t->link != NULL)
            t = t->link;

        t->link = temp;
    }
}

void view(){
    node *t;
    t = start;
    while(t != NULL)
    {
        cout << t->val << endl;
        t = t->link;
    }
}

int main()
{
    insert(4);
    insert(5);
    insert(6);
    insert(8);
    view();
}