#include<stdio.h>


void  merge(int a[],int low,int high){
    int i,j,k,b[20];
    int mid=(low+high)/2;
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;k++;
        }
        else{
            b[k]=a[j];
            j++;k++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        k++;i++;
    }
    while(j<=high){
        b[k]=a[j];
        k++;j++;
    }
    for(int i=low;i<=high;i++){
        a[i]=b[i];
    }
}

void show(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}


int main(){
    int a[]={5,3,1,8,10,41,32};
    merge(a,0,6);
    show(a,7);
}