/*
 * main.c
 *
 *  Created on: Jun 4, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>
#include <stdlib.h>

int main() {
	int r, c;
	printf("enter rows and columns of the matrix: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &r);
	scanf("%d", &c);

	int **arr = (int**) malloc(r * sizeof(int*));
	for (int i = 0; i < r; i++) {
		arr[i] = (int*) malloc(c * sizeof(int));
	}
	int **arrT = (int**) malloc(c * sizeof(int*));
	for (int i = 0; i < c; i++) {
		arrT[i] = (int*) malloc(r * sizeof(int));
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			arrT[j][i]=arr[i][j];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			printf("%d ",arrT[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < c; i++) {
		free(arrT[i]);
	}
	for (int i = 0; i < r; i++) {
		free(arr[i]);
	}
	free(arr);
	free(arrT);
}
