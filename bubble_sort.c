#include<stdio.h>


void bubbleSort(int a[],int size){
    int isSorted=1;
    int temp;
    for(int i=0;i<size-1;i++){// size-1 beacuse of n-1 and this is loop for passes
        for(int j=0;j<size-1-i;j++){// loop for each passes
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted)
            return;
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
    bubbleSort(a,size);
    show(a,size);
}