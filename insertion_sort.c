#include<stdio.h>


void insertionSort(int a[],int size){
    int key,j;
    for(int i=1;i<=size-1;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}


void show(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int a[]={1,5,81,70,6,110,26,12,452};
    int size=sizeof(a)/sizeof(int);
    show(a,size);
    insertionSort(a,size);
    show(a,size);
}