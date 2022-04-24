#include <stdio.h>
#include<stdlib.h>

struct array{
    int total_size;
    int used_size;
    int *ptr; //points the first element of the arrays
};

void createarray(struct array *a,int t_size,int u_size){
    a->total_size=t_size; // (*a).total_size=tsize; deferencing the array pointer
    a->used_size=u_size;
    a->ptr=(int*)malloc(t_size*sizeof(int));
}

void insertion(struct array *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}

void traversal(struct array *a){
    for(int i=0;i<a->used_size;i++){
        printf("%d ",(a->ptr)[i]);
    }
}

int main(){
    struct array myarray;
    createarray(&myarray,10,3); //as in createarray function a pointer is passed so during function calling it will expect address of array
    insertion(&myarray);
    traversal(&myarray);
}