/*
 * main.c
 *
 *  Created on: Jun 4, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int m,n,p;
	printf("Enter no of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&m);

	int* arr =malloc(m*sizeof(int));
	int* arr2 =malloc((m+1)*sizeof(int));

	printf("enter elements :");
	fflush(stdin);
	fflush(stdout);
	for(int i=0;i<m;i++){
		scanf("%d",&arr[i]);
		arr2[i]=arr[i];
	}

	printf("enter the element to be inserted :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	printf("enter the location:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p);
	arr2[p-1]=n;
	for(int i=p;i<m+1;i++){
		arr2[i]=arr[i-1];
	}

	for(int i=0;i<m+1;i++){
		printf("%d",arr2[i]);
	}

	free(arr);
	free(arr2);
}
