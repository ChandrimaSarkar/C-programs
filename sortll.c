  // Definition for singly-linked list.
  #include<stdio.h>
  #include<stdlib.h>
  struct ListNode {
      int val;
      struct ListNode *next;
 };
 
  typedef struct ListNode listnode;
  
  listnode* listnode_new(int val) {
      listnode* node = (listnode *) malloc(sizeof(listnode));
      node->val = val;
      node->next = NULL;
      return node;
  }

/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* display(listnode *A){
    while(A!=NULL){
        printf("%d->",A->val);
        A=A->next;
    }
}
listnode* solve(listnode* A) {
    listnode *p=NULL,*q=NULL;
    while(A!=NULL){
        q=A;
        A=A->next;
        if(p>q){
            p->next=q->next;
            q->next=p;
            q=p;
            q=A;
        }
    }
    display(listnode *A)
    return listnode *A;
}
