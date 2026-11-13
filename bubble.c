#include <stdio.h>
#include <stdbool.h>
void bubble(int arr[], int n){
    for(int i= 0; i<n-1; i++){
        bool s = false;
        for(int j= 0; j<n-i-1; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
                s = true;
            }
        }
        if(s == false){
            break;
        }
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
    printarr(arr, max);
    bubble(arr, max);
    printarr(arr, max);
    return 0;
}