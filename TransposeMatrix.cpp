//Transpose of matrix:
#include <stdio.h>
int main(){
	int matrix[3][3];
	int trans[3][3];
	printf("Enter the elements in array:\n");
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			trans[j][i] = matrix[i][j];
		}
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			printf("%d  ", trans[i][j]);
			if(j == 2){
				printf("\n");
			}
		}
	}	
	
}
