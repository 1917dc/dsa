#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int* A, int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1];
    int R[n2];

    for(int i = 0; i < n1; i++){
        L[i] = A[p + i];
    }

    for(int j = 0; j < n2; j++){
        R[j] = A[q + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = p;

    while( i < n1 && j < n2){
        if(L[i] < R[j]){
            A[k] = L[i];
            i++;
        } 
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        A[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int* A, int p, int r){
    if(p < r){
        int q = floor((p + r)/2);

        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r);
    } 
}

int main(){
    int array[] = {1,0,4,3,6,5,10,7,20,12};
    int size = sizeof(array)/sizeof(array[0]);

    printf("\n");
    printf("Input array:");
    printf("\n");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");


    mergeSort(array, 0, size - 1);

    printf("\n");
    printf("Output array:");
    printf("\n");
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        printf("%d ", array[i]);
    }
    printf("\n");


    return 0;
}