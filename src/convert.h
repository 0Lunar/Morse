#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert_to_morse(char string[100]){
        printf("\n");
	for(int i = 0; i < strlen(string); i++){
		char MORSE_ALPHABET[42][7] = {
    ".-",    "-...",    "-.-.",   "-..",    ".",      "..-.",   "--.",
    "....",  "..",      ".---",   "-.-",    ".-..",   "--",     "-.",
    "---",   ".--.",    "--.-",   ".-.",    "...",    "-",      "..--",
    "...-",  ".--",     "-..-",   "-.--",   "--..",   ".----",  "..---",
    "...--", "....-",   ".....",  "-....",  "--...",  "---..",  "----.",
    "-----", ".......", "--..--", ".-.-.-", "---...", "..--..", "-.-.--"};
   		int temp = 0;
    		char FRASE[100];
    		system("cls||clear");
    		printf("Inserisci la frase da convertire: ");
    		gets(FRASE);
    		for(int i = 0; i < strlen(FRASE); i++){
        		if(FRASE[i]  >= 'A' && <= 'Z'){
            		FRASE[i] += 32;
        		}
        		temp = FRASE[i] - 97;
        		printf("%s ", MORSE_ALPHABET[temp]);
    		}
	}
}
