#include <stdio.h>
int binary(int arr[], int x, int n){
    int low= 0;
    int high = n-1;
    while(low<=high){
        int mid= low + (high-low)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the number of elements");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements into the array");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target");
    scanf("%d", &target);
    int res= binary(arr, target, n);
    if(res!= -1){
        printf("Found element at index %d", res);
    }
    else{
        printf("Element not found");
    }
    return 0;
}