#include<stdio.h>
int linearsearch(int a[],int size,int element){
    for(int i=0;i<size;i++){
        if(a[i]==element){
            printf("The element is present in the array at position %d",i);
        }
    }
}

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;//exclude mid because we already know mid is not the element we want
        }
        else{
            high = mid -1;//exclude mid here too
        }
    } 
    return -1;
    
}


int main(){
    int arr[]={1,2,5,75,85};
    int size=sizeof(arr)/sizeof(int); 
    linearsearch(arr,size,85);
    binarysearch(arr,size,75);
    return 0;
}