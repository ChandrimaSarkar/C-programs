#include<stdio.h>

void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
void indinsertion(int a[], int size,int element,int index,int capacity){
    if(size>=capacity){
        printf("Insertion was unsuccessful!");
    }
    for(int i=size-1;i>=index;i--){
        a[i+1]=a[i];
    }
    a[index]=element;
    printf("\n");
}
void deletion(int a[],int size,int index){
    if(size<0){
        printf("Array is empty!");
    }
    for(int i=index;i<size;i++){
        a[i]=a[i+1];
    }
    printf("\n");
}
int main(){
    int arr[100]={1,3,5,7,8};
    int size=5,element=45,index=2;
    indinsertion(arr,size,element,index,100);
    size+=1;
    display(arr,size);
    deletion(arr,size,index);
    size-=1;
    display(arr,size);

}