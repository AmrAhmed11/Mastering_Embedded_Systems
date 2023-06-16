/*
 * main.c
 *
 *  Created on: Jun 16, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int isPrime(int n);

int main() {
	int start, finish;

	char T;
	printf("enter the intervals:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &start, &finish);
	for (int i = start; i <= finish; i++) {
		T = isPrime(i);
		if(T==1){
			printf("%d ",i);
		}
	}
}

int isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
