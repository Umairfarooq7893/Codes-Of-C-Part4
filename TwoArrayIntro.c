//2D array
/*A 2D array in C, also known as a two-dimensional array, 
  is a collection of arrays organized in a grid-like structure with rows and columns. 

   => Declaration of a 2D array
      type array_name[rows][columns];
*/
#include <stdio.h>
int main() {
    int arr[2][3];  // 2 rows, 3 columns
// Input elements
    printf("Enter 6 elements for 2x3 array:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
// Print elements
    printf("The 2D array is:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
