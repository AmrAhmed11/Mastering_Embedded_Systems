/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Amr Ahmed
 */


#include<stdio.h>

int main(){
	char a;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);

	if((a<'a' || a>'z') && (a<'A' || a>'Z') ){
		printf("you didn't enter an alphabet character :( ");
		return 1;
	}

	switch(a){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("%c is a vowel",a);
			break;
		default:
			printf("%c is a consonant",a);
	}
}
