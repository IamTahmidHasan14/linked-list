#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
int i, n, x, y;
struct node *p, *q, *h;
void create(int n)
{
    h=NULL;
    q=NULL;
    for(i=0; i<n; i++){
        p=(struct node*)malloc(sizeof(struct node));
        printf("Input data: ");
        scanf("%d",&x);
        p->data=x;
        if(h==NULL)
            h=p;
        if(q==NULL)
            q=p;
        else{
            q->next=p;
            q=p;
        }
    }
    p->next=NULL;
    display();
}
void display()
{
    p=h;
    printf("\n");
    printf("h");
    while(p!=NULL){
        printf("--> %d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void insert()
{
    for(;;){
        q=h;
        printf("\nInsert a new node after: ");
        scanf("%d",&y);
        while(q!=NULL){
            if(q->data==y){
                p=(struct node*)malloc(sizeof(struct node));
                printf("Insert New data: ");
                scanf("%d",&x);
                p->data=x;
                p->next=q->next;
                q->next=p;
                break;
            }
            else
                q=q->next;
        }
        display();
    }
}
int main()
{
    create(3);
    insert();
}
