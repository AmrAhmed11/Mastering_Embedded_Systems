/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Amr Ahmed
 */

#include<stdio.h>

int main(){
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(a>=b && a>=c){
		printf("Largest number: %f",a);
	}else if(b>=a && b>=c){
		printf("Largest number: %f",b);
	}else{
		printf("Largest number: %f",c);
	}
}
