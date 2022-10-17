#include <stdio.h>
int main() {
  int r,c,i,j,x[100][100],y[100][100],s[100][100];
  printf("Enter number of rows (less than 4): ");
  scanf("%d", &r);
  printf("Enter number of columns (less than 4): ");
  scanf("%d", &c);
  printf("\nEnter elements of 1st matrix:\n");
  for (i=0;i<r; ++i)
    for (j=0;j<c;++j) {
      printf("Enter element x%d%d: ",i+1,j+1);
      scanf("%d",&x[i][j]);}
  printf("Enter elements of 2nd matrix:\n");
  for (i=0;i<r;++i)
    for (j=0;j<c;++j) {
      printf("Enter element y%d%d: ",i+1,j+1);
      scanf("%d",&y[i][j]);
    }
  for (i=0;i<r;++i)
    for (j=0;j<c;++j) {
      s[i][j]=x[i][j]+y[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i=0;i<r;++i)
    for (j=0;j<c;++j) {
      printf("%d   ", s[i][j]);
      if (j==c-1) {
        printf("\n\n");
      }
    }
  return 0;
}
