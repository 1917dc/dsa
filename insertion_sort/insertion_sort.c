#include <stdio.h>

void insertion_sort(int size, int* array) {
    for (int j = 1; j < size; j++) {
        int key = array[j];
        int i = j - 1;

        while (i >= 0 && array[i] > key) {
            array[i + 1] = array[i];
            i = i - 1;
        }

        array[i + 1] = key;
    }
}


int main(){

    int array[] = {1,3,2,5,4,6,11,9};
    insertion_sort(sizeof(array)/sizeof(array[0]), array);

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }

    return 0;
}