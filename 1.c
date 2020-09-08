//Nitish Kumar Sonthalia
//Header Linked List
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void creat_list(struct node **,int n);
void display_list_start(struct node ** );


int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node ));
    head->data=0;
    head->next=NULL;
    struct node *start = head;
    int t;

    while(1){
        printf("\n MENU ");
        printf("\n 1. ADD An Element ");
        printf("\n 2. Display The List From Start ");
        printf("\n 3. Exit ");
         scanf("%d",&t);
          int e;

        switch (t)
        {

        case 1:
            printf("\n Enter The Element To Be Entered: ");
            scanf("%d",&e);
            creat_list(&start,e);
            break;

        case 2:
            display_list_start(&start);
            break;
        case 3:
            exit(1);
            break;

        default:
            break;
        }
    }
}


void creat_list(struct node **st ,int n){
    struct node *temp;
    ((*st)->data)++;
    struct node *new1 = (struct node *)malloc(sizeof(struct node ));

    new1->data=n;

    new1->next=NULL;

    temp=*st;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next = new1;
}
void display_list_start(struct node **st ){
    struct node*temp=(*st)->next;
    printf("\nTotal elewments in the list are:%d",(*st)->data);
    printf("\nElements in LIST are:");

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
