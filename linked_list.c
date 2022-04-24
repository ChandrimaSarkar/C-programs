#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void traversal(struct Node *n){
    while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
    printf("\n");
}

struct Node *insertAtBegining(struct Node *head,int u_data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=u_data;
    return ptr;
}

struct Node *insertInBetween(struct Node *head,int u_data,int index){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=u_data;
    return head;
}

struct Node *insertAfterGivenIndex(struct Node *head,struct Node *prevNode,int u_data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    ptr->data=u_data;
    return head;
}

struct Node *insertAtEnd(struct Node *head,int u_data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->next=NULL;
    p->next=ptr;
    ptr->data=u_data;
    return head;
}

struct Node *deleteAtBegining(struct Node *head){
    struct Node *p=head;
    head=head->next;
    free(p);
    return head;
}

struct Node *deleteInBetween(struct Node *head,int index){
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct Node *q=p->next;
    p->next=q->next;
    free(q);
    return head;
}

struct Node *deleteAtLast(struct Node *head){
    struct Node *p=head;
    struct Node *q=head;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct Node *deletingAtGivenValue(struct Node *head,int u_data){
    struct Node *p=head;
    while(p->data!=u_data){
        p=p->next;
    }

}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=15;
    third->next=fourth;

    fourth->data=21;
    fourth->next=NULL;

    traversal(head);
    head=insertAtBegining(head,33);
    traversal(head);
    head=insertInBetween(head,13,2);
    traversal(head);
    head=insertAtEnd(head,29);
    traversal(head);
    head=insertAfterGivenIndex(head,third,19);
    traversal(head);
    head=deleteAtBegining(head);
    traversal(head);
    head=deleteInBetween(head,3);
    traversal(head);
    head=deleteAtLast(head);
    traversal(head);
    return 0;
}