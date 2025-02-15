
#include<stdio.h>

void read(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("Enter a number : ");
        scanf("%d", &arr[i]);
    }
}

void sort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j+1] = arr[j] + arr[j+1];
                arr[j] = arr[j+1] - arr[j];
                arr[j+1] = arr[j+1] - arr[j];
            }
        }
    }
}

void merge(int arr1[], int arr2[], int out[], int size1, int size2){

    int i=0, j=0, k=0;
    while(k<(size1+size2)){
        if(arr1[i] < arr2[j]){
            out[k] = arr1[i];
            i++;
        }
        else{
            out[k] = arr2[j];
            j++;
        }
        k++;
    }
}

void display(int arr[], int size){
    for(int i=0;i<(size);i++){
        printf("%d ", arr[i]);
    }
}

void main(){
    int size1, size2;
    printf("Enter size of array 1 : ");
    scanf("%d", &size1);

    int arr1[size1];
    read(arr1, size1);

    printf("Enter size of array 2 : ");
    scanf("%d", &size2);

    int arr2[size2];
    read(arr2, size2);

    sort(arr1, size1);
    sort(arr2, size2);

    int out[size1 + size2];
    merge(arr1, arr2, out, size1, size2);

    display(out, size1+size2);
}
