/*
 * main.c
 *
 *  Created on: Jun 4, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>
#include<stdlib.h>

int main() {
	int m, n;
	printf("enter the number of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &m);

	int *arr = (int*) malloc(m * sizeof(int));

	printf("enter elements: ");
	fflush(stdin);
	fflush(stdout);
	for (int i = 0; i < m; i++) {
		scanf("%d", &arr[i]);
	}

	printf("enter the element to be searched for: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);

	for (int i = 0; i < m; i++) {
		if (arr[i] == n) {
			printf("number found in location = %d", i + 1);
			return 0;
		}
	}
	printf("Sorry your number is not in the list!!!");

	free(arr);
}
