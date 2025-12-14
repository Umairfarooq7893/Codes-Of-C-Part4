#include<stdio.h>
#include<conio.h>
int main(){
// declaring and initializing two 2D arrays
int a[2][2]={{1,2},{3,4}};
int b[2][2]={{5,6},{7,8}};
int sum[2][2];

// adding two matrices
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        sum[i][j] = a[i][j] + b[i][j];
    }
/*  note i = 0; bez arrays indexing starts from 0
    when i = 0; j = 0; sum[0][0] = a[0][0] + b[0][0] = 1 + 5 = 6
    when i = 0; j = 1; sum[0][1] = a[0][1] + b[0][1] = 2 + 6 = 8
    when i = 1; j = 0; sum[1][0] = a[1][0] + b[1][0] = 3 + 7 = 10
    when i = 1; j = 1; sum[1][1] = a[1][1] + b[1][1] = 4 + 8 = 12
*/
}
// displaying the sum matrix
    printf("Sum of two matrices is:\n");
    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            printf("%d\t",sum[i][j]);
    /*      when i = 0; j = 0; prints sum[0][0] = 6
            when i = 0; j = 1; prints sum[0][1] = 8
            when i = 1; j = 0; prints sum[1][0] = 10
            when i = 1; j = 1; prints sum[1][1] = 12
    */
        }printf("\n");
    /*when first row is printed
    it moves to the next line
    */
    }
return 0;
}