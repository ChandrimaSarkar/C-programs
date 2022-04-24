#include<stdio.h>


void show(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
void selectionSort(int a[],int n){
    int minindex,temp;
    for(int i=0;i<n;i++){
        minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
                minindex=j;
            }
        }
        temp=a[i];
        a[i]=a[minindex];
        a[minindex]=temp;
    }
}

int main(){
    int a[]={5,8,1,6,9,10,3};
    selectionSort(a,7);
    show(a,7);

}