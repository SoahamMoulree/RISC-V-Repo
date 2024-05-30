#include<stdio.h>
#include<stdlib.h>

#define R1 2
#define R2 2
#define C1 2
#define C2 2
int main(){
	int result[R1][C2];
	int sum = 0;
	int A[R1][C1] = {{1,1},{1,1}};
	int B[R2][C2] = {{2,1},{2,1}};
	
	for(int i = 0; i<R1; i++){
		for(int j = 0; j<C2; j++){
			for(int k = 0; k < R2; k++){
				sum += A[i][k]*B[k][i];
	

			}
			result[i][j] = sum;
			sum = 0;
		

		}

	}

	printf("Result matrix : \n");
	for(int i = 0; i<R1; i++){
		for(int j = 0; j<C2; j++){
			printf("%d \t", result[i][j]);
		
		
		}
		printf("\n");	

	}
	return 0;


}
