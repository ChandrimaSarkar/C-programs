#include<stdio.h>
#include<stdlib.h>


struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct stack *st,int n){
    st->size=n;
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
}

void display(struct stack st)
{
    /* data */
    for(int i=st.top;i<=0;i--){
        printf("%d ",st.s[i]);
    }
}

void push(struct stack *st,int n){
    if(st->top==st->size-1){
        printf("Stack overflow\n");
    }
    else{
        st->top++;
        st->s[st->top]=n;
    }
}

void pop(struct stack *st){
    if(st->top==-1){
        printf("Stack is empty\n");
    }
    else{
        st->top--;
    }
}


int main(){
    struct stack st;
    create(&st,5);
    push(&st,1);
    /*push(&st,2);
    push(&st,3);
    push(&st,4);
    push(&st,5);*/
    display(st);
    /*pop(&st);
    display(&st);*/
}