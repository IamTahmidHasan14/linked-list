#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *p,*q,*r,*s,*t,*h;
    p=(struct node*)malloc(sizeof(struct node));
    q=(struct node*)malloc(sizeof(struct node));
    r=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));

    p->data=50;
    q->data=60;
    r->data=70;
    s->data=80;
    p->next=q;
    q->next=r;
    r->next=s;
    s->next=NULL;
    h=p;

    p=h;
    printf("h");
    while(p!=NULL){
        printf("--> %d",p->data);
        p=p->next;
    }

    //insert a new node at the first;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=99;
    t->next=h;
    h=t;

    p=h;
    printf("\n\nAfter insert an item at the beginning of the list.\n");
    printf("h");
    while(p!=NULL){
        printf("--> %d",p->data);
        p=p->next;
    }
    printf("\n");
    return 0;
}
