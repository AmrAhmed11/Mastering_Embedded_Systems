/*
 * main.c
 *
 *  Created on: Jun 4, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>
#include <stdlib.h>

int main() {
	int n;
	float *arr;
	float avg = 0;
	printf("enter the number of the data: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);

	arr = (float*) malloc(n * sizeof(float));

	if (arr == NULL) {
		printf("ERROR!!!");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		printf("%d. enter number: ", i + 1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f", (arr + i));
		avg += arr[i];
	}
	printf("average = %f", avg/n);
	free(arr);
}
