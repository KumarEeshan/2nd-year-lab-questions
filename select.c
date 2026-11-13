#include <stdio.h>
void select(int arr[], int n){
    for(int i= 0; i<n-1; i++){
        int min = i;
        for(int j= i+1; j<n; j++){
            if(arr[min]> arr[j]){
                min = j;
            }
        }
        int temp= arr[i];
        arr[i]= arr[min];
        arr[min] = temp;
    }
}
void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int max;
    printf("Enter the max number of elements\n");
    scanf("%d", &max);
    int arr[max];
    printf("Enter the elements into the array\n");
    for(int i=0; i<max; i++){
        scanf("%d", &arr[i]);
    }
    select(arr, max);
    printarr(arr, max);
    return 0;
}