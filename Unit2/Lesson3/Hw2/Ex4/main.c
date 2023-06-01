/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int main(){
	float a;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	if(a>0){
		printf("%f is positive",a);
	}else if(a<0){
		printf("%f is negative",a);
	}else{
		printf("you entered a zero");
	}
}
