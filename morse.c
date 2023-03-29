#include <stdio.h>
#include "src/convert.h"

int main(){
	char string[100];
	system("cls||clear");
	printf("Enter the string to convert: ");
	//scanf("%s", &string);
	gets(string);
	convert_to_morse(string);
}