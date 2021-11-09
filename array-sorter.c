#include <stdio.h>

void sortArray (int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]){
                
                int temp; 
                /* 
                ! Swapping the array if the number on left is greater
                ! than the number on right
                */

                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray (int array[], int size) {

    /*
    ! printing the array
    */
    for (int i = 0; i < size; i++) {
        printf ("%d, ", array[i]);
    }
}

int main () {
    int array[] = {5, 7, 6, 29, 5, 2, 45, 0, -1111, 6 };
    int size = sizeof (array) / sizeof (array[0]);

    sortArray(array, size);
    printArray(array, size);
}