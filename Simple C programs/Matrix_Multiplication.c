#include <stdio.h>
#include <conio.h>

int main() {
	clrscr();
    int row,col,i,j;
    int mul = 0;
    printf("Enter the no of row and column: ");
    scanf("%d%d",&row,&col);
    
    int matrix1[row][col];
    int matrix2[col][row];
    int mulMatrix[col][row];
    
    printf("Enter %d Elements of first matrix: ",row*col);
    for(i = 0 ; i < row; i ++) {
    	for( j = 0; j < col; j++){
    scanf("%d",&matrix1[i][j]);
    		}
     }

 printf("Enter %d Elements of second matrix: ",row*col);
    for(i = 0 ; i < row; i ++) {
    	for( j = 0; j < col; j++){
    scanf("%d",&matrix2[i][j]);
    		}
     }
     for( i = 0 ; i < col; i++ ) {
     	for( j = 0; j < row ; j++ ) {
     	  for(int  k = 0; k < row ; k++ ) {
     		mul =mul+ matrix1[i][j]*matrix2[j][i];
     		}
     		mulMatrix[i][j] = mul;
     		}
     		mul = 0;
     	}
     	
     	for( i = 0 ; i < col; i++ ) {
     	for( j = 0; j < row ; j++ ) {
     		printf("%d   ",&mulMatrix[i][j]);
     		}
     	printf("\n");
      }	
	getch();
	return 0;
	}
