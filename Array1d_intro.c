// Array1D_intro.c
// An Array is a collection of elements of the same type stored in contiguous memory locations.

#include <stdio.h>
int main(){
    // Declaring and initializing
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,4}; 

    // Accessing elements , without using loops
    printf("First element of arr1: %d\n", arr1[0]);

    printf("First element of arr2: %d\n", arr2[0]);
    printf("Second element of arr2: %d\n", arr2[1]);
    printf("Third element of arr2: %d\n", arr2[2]);
    printf("Fourth element of arr2: %d\n", arr2[3]);
    printf("Fifth element of arr2: %d\n", arr2[4]);

    // Modifying elements
    arr1[2] = 10;
    printf("Modified third element of arr1: %d\n", arr1[2]);

    // Accessing elements of arr1 using loop
    printf("Elements of arr1: ");
    for(int i=0; i<5; i++){    // Array index starts from 0
        printf("%d \t", arr1[i]);
    }

    // Accessing elements of arr2 using loop
    printf("\nElements of arr2: ");
    for(int i=0; i<5; i++){
        printf("%d \t", arr2[i]);
    }
    // Storing characters in int array
    int arr3[5] = {'A', 'B', 'C', 'D', 'E'};
    printf("\nElements of arr3: ");
    for(int i=0; i<5; i++){
        printf("%c = ", arr3[i]); // prints characters
        printf("%d\t", arr3[i]);   // prints ASCII values
    }
    return 0;
}