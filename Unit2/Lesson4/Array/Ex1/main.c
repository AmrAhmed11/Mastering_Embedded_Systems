/*
 * main.c
 *
 *  Created on: Jun 4, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int main() {
	float m1[2][2], m2[2][2], sum[2][2];
	printf("enter the elements of the first matrix: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("enter a%d%d: ", i+1, j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &m1[i][j]);
		}
	}
	printf("enter the elements of the second matrix: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("enter b%d%d: ", i+1, j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &m2[i][j]);
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum[i][j] = m1[i][j] + m2[i][j];
		}
	}
	printf("the sum of the two matrices: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf(" %f ",sum[i][j]);
		}
		printf("\n");
	}
}

