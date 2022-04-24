#include<stdio.h>


void deletion(int arr[],int index,int size){
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
      }
       size-=1;
}
   
void show(int arr[],int size){
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    int arr[10]={1,5,6,9,22};
    printf("Enter the index:");
    scanf("%d",&n);
    deletion(arr,n,5);
    show(arr,5);
}