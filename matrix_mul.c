#include<stdio.h>
int main(){
// declaring two 2D arrays
    int a[2][3], b[3][2];
    // declaring a 2D array to store multiplication result

// taking input for first matrix
    printf("Enter elements of first matrix (2x3):\n");
    for(int i =0 ; i<2 ;i++){
        for(int j=0; j<3 ; j++){
            scanf("%d",&a[i][j]);
            /*when i = 0; j = 0; input goes to a[0][0]
              when i = 0; j=1 ; input goes to a[0][1]
              when i = 0; j=2 ; input goes to a[0][2]
              when i = 1; j=0 ; input goes to a[1][0]
              when i = 1; j=1 ; input goes to a[1][1]
              when i = 1; j=2 ; input goes to a[1][2]
            */
        }
    }

// taking input for second matrix
    printf("Enter elements of second matrix (3x2):\n");
    for(int i =0 ; i<3 ;i++){
        for(int j=0; j<2 ; j++){
            scanf("%d",&b[i][j]);
            /*when i = 0; j = 0; input goes to b[0][0]
              when i = 0; j=1 ; input goes to b[0][1]
              when i = 1; j=0 ; input goes to b[1][0]
              when i = 1; j=1 ; input goes to b[1][1]
              when i = 2; j=0 ; input goes to b[2][0]
              when i = 2; j=1 ; input goes to b[2][1]
            */
        }
    }

// performing matrix multiplication
int mul[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            mul[i][j]=0; // initializing all elements to 0
            for(int k=0; k<3; k++){
                mul[i][j] += a[i][k] * b[k][j];
                /*when i=0 ; j=0 ; k=0 ; mul[0][0] += a[0][0] * b[0][0]
                  when i=0 ; j=0 ; k=1 ; mul[0][0] += a[0][1] * b[1][0]
                  when i=0 ; j=0 ; k=2 ; mul[0][0] += a[0][2] * b[2][0]
                mul[0][0] is calculated completely here


                  when i=0 ; j=1 ; k=0 ; mul[0][1] += a[0][0] * b[0][1]
                  when i=0 ; j=1 ; k=1 ; mul[0][1] += a[0][1] * b[1][1]
                  when i=0 ; j=1 ; k=2 ; mul[0][1] += a[0][2] * b[2][1]
                mul[0][1] is calculated completely here

                  when i=1 ; j=0 ; k=0 ; mul[1][0] += a[1][0] * b[0][0]
                  when i=1 ; j=0 ; k=1 ; mul[1][0] += a[1][1] * b[1][0]
                  when i=1 ; j=0 ; k=2 ; mul[1][0] += a[1][2] * b[2][0]
                mul[1][0] is calculated completely here

                  when i=1 ; j=1 ; k=0 ; mul[1][1] += a[1][0] * b[0][1]
                  when i=1 ; j=1 ; k=1 ; mul[1][1] += a[1][1] * b[1][1]
                  when i=1 ; j=1 ; k=2 ; mul[1][1] += a[1][2] * b[2][1]
                mul[1][1] is calculated completely here
                */
            }
        }
    }
// DISPLAYING THE RESULTANT MATRIX
    printf("Resultant Matrix after Multiplication (2x2):\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t", mul[i][j]);
            /*when i=0 ; j=0 ; prints mul[0][0]
            then \t adds a tab space
              when i=0 ; j=1 ; prints mul[0][1]
            then \t adds a tab space
            */
        }
        printf("\n");
    /*  after first row is printed ,it moves to next line
        again inner loop starts for next row
            when i=1 ; j=0 ; prints mul[1][0]
            when i=1 ; j=1 ; prints mul[1][1] */
    }
     return 0 ;
}