#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *p,*q,*h=NULL;
int main()
{
    int option;
    for(;;){
    option=menu();
    if(option==4) break;
        switch(option){
            case 1: Insert(); break;
            case 2: Delete(); break;
        }
    }
return 0;
}
void Insert(){
    int x,y;
    p=(struct node*)(malloc(sizeof(struct node)));
    printf("\nEnter your data: ");
    scanf("%d",&x);
    p->data=x;
    p->next=NULL;
    printf("\nEnter after which node: ");
    scanf("%d",&y);
    if(h==NULL){
        h=p;
        printf("Node inserted\n");}
    else{
        q=h;
        while(q!=NULL){
            if(q->data==y){
                p->next=q->next;
                q->next=p;
                printf("Node:INSERTED\n");
                break;
            }
            q=q->next;
        }
    }
    Display();
}
void Delete(){
    q=h;
    p=NULL;
    int y;
    printf("\nEnter which node: ");
    scanf("%d",&y);
    while(q!=NULL){
        if(q->data==y){
            if(q==h)
                h=h->next;
            else
                p->next=q->next;
            printf("Node:DELETED...\n");
            Display();
            break;
        }
        else{
            p=q;
            q=q->next;
        }
    }
}
void Display(){
    p=h;
    printf("\nList h");
    while(p!=NULL){
        printf("--> %d",p->data);
        p=p->next;
    }
    printf("\n");
}
int menu(){
    int op;
    printf("\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("Enter your option: ");
    scanf("%d",&op);
    return op;
}
