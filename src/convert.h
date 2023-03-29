#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert_to_morse(char string[100]){
        printf("\n");
	for(int i = 0; i < strlen(string); i++){
		if(string[i] == 'a' || string[i] == 'A'){
			printf(".- ");
		}
		if(string[i] == 'b' || string[i] == 'b'){
			printf("-... ");
		}
		if(string[i] == 'c' || string[i] == 'C'){
			printf("-.-. ");
		}
		if(string[i] == 'd' || string[i] == 'D'){
			printf("-.. ");
		}
		if(string[i] == 'e' || string[i] == 'E'){
			printf(". ");
		}
		if(string[i] == 'f' || string[i] == 'F'){
			printf("..-. ");
		}
		if(string[i] == 'g' || string[i] == 'G'){
			printf("--. ");
		}
		if(string[i] == 'h' || string[i] == 'H'){
			printf(".... ");
		}
		if(string[i] == 'i' || string[i] == 'I'){
			printf(".. ");
		}
		if(string[i] == 'j' || string[i] == 'J'){
			printf(".--- ");
		}
		if(string[i] == 'k' || string[i] == 'K'){
			printf("-.- ");
		}
		if(string[i] == 'l' || string[i] == 'L'){
			printf(".-.. ");
		}
		if(string[i] == 'm' || string[i] == 'M'){
			printf("-- ");
		}
		if(string[i] == 'n' || string[i] == 'N'){
			printf("-. ");
		}
		if(string[i] == 'o' || string[i] == 'O'){
			printf("--- ");
		}
		if(string[i] == 'p' || string[i] == 'P'){
			printf(".--. ");
		}
		if(string[i] == 'q' || string[i] == 'Q'){
			printf("--.- ");
		}
		if(string[i] == 'r' || string[i] == 'R'){
			printf(".-. ");
		}
		if(string[i] == 's' || string[i] == 'S'){
			printf("... ");
		}
		if(string[i] == 't' || string[i] == 'T'){
			printf("- ");
		}
		if(string[i] == 'u' || string[i] == 'U'){
			printf("..-- ");
		}
		if(string[i] == 'v' || string[i] == 'V'){
			printf("...- ");
		}
		if(string[i] == 'w' || string[i] == 'W'){
			printf(".-- ");
		}
		if(string[i] == 'x' || string[i] == 'X'){
			printf("-..- ");
		}
		if(string[i] == 'y' || string[i] == 'Y'){
			printf("-.-- ");
		}
		if(string[i] == 'z' || string[i] == 'Z'){
			printf("--.. ");
		}
		if(string[i] == '1'){
			printf(".---- ");
		}
		if(string[i] == '2'){
			printf("..--- ");
		}
		if(string[i] == '3'){
			printf("...-- ");
		}
		if(string[i] == '4'){
			printf("....- ");
		}
		if(string[i] == '5'){
			printf("..... ");
		}
		if(string[i] == '6'){
			printf("-.... ");
		}
		if(string[i] == '7'){
			printf("--... ");
		}
		if(string[i] == '8'){
			printf("---.. ");
		}
		if(string[i] == '9'){
			printf("----. ");
		}
		if(string[i] == '0'){
			printf("----- ");
		}
		if(string[i] == ' '){
			printf("....... ");
		}
		if(string[i] == ','){
			printf("--..-- ");
		}
		if(string[i] == '.'){
			printf(".-.-.- ");
		}
		if(string[i] == ':'){
			printf("---... ");
		}
		if(string[i] == '?'){
			printf("..--.. ");
		}
		if(string[i] == '!'){
			printf("-.-.-- ");
		}
	}
}