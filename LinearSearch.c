#include <stdio.h>
int lin(int arr[], int target, int n){
    for(int i=0; i<n; i++){
        if(arr[i]== target){
            return i;
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
    int res= lin(arr, target, n);
    if(res!= -1){
        printf("Found element at index %d", res);
    }
    else{
        printf("Element not found");
    }
    return 0;
}