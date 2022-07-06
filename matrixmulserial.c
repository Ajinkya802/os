#include <stdio.h>

int main()
{   int a_rows,a_cols,b_rows,b_cols,i,j,k,sum=0;

    printf("Enter the rows and columns for first matrix (row)(col)  :\n");
    scanf("%d %d",&a_rows,&a_cols);

    printf("Enter the rows and columns for second matrix (row)(col) :\n");
    scanf("%d %d",&b_rows,&b_cols);
    int a[a_rows][a_cols], b[b_rows][b_cols],matrix[10][10];

    if(a_cols != b_rows){
        printf("Sorry! We can't multiply the matrix because the column number of matrix 1 and the row number of matrix 2 aren't same !!\n");
        
    }else{
        printf("Enter elements for first matrix  :\n");
       for(i = 0; i < a_rows; i++){
           for(j = 0; j< a_cols; j++){
               scanf("%d",&a[i][j]);
           }
       }

    printf("Enter elements for second matrix  :\n");

       for(i = 0; i < b_rows; i++){
           for(j = 0; j < b_cols; j++){
               scanf("%d",&b[i][j]);
           }
       }

       printf("multiplying matrix....\n");
       //multiplying matrix
       for(i=0; i < a_rows; i++){
           for(j = 0; j < b_cols; j++){
               for(k = 0; k < a_cols; k++){
                   sum+=a[i][k] * b[k][j];
               }
               matrix[i][j] = sum;
               sum=0;
               
           }
           printf("\n");
       }

       printf("first matrix  :\n");
       for(i = 0; i < a_rows; i++){
           for(j = 0; j< a_cols; j++){
               printf("%d ",a[i][j]);
           }
           printf("\n");
       }


        printf("\n\n");

       printf("second matrix  :\n");
       for(i = 0; i < b_rows; i++){
           for(j = 0; j< b_cols; j++){
               printf("%d ",b[i][j]);
           }
           printf("\n");
       }


       printf("Multiplied matrix  :\n");
       for(i = 0; i < a_rows; i++){
           for(j = 0; j< b_cols; j++){
               printf("%d ",matrix[i][j]);
           }
           printf("\n");
       }
    }

     

    return 0;
}