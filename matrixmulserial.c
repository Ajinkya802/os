#include<stdio.h>
#include<stdlib.h>
#define n 5120
int a[n][n],b[n][n],c[n][n];
int main()
{
 int i,j,k;
 for(i=0;i&lt;n;i++) // Data Initialization
 for(j=0;j&lt;n;j++)
 {
 a[i][j]=1;
 b[i][j]=1;
 }
 for(i=0;i&lt;n;i++) // Multiplication
 for(j=0;j&lt;n;j++)
 for(k=0;k&lt;n;k++)
 c[i][j]=c[i][j]+a[i][k]*b[k][j];
/* printf(“\n The resultant matrix is \n”);
for(i=0;i&lt;n;i++)
{
 for(j=0;j&lt;n;j++)
 printf(“ %d”,c[i][j]);
 printf(“\n”);
}
*/
}
