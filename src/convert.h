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
        	if(string[i]  >= 'A' && string[i] <= 'Z'){
            		string[i] += 32;
        	}
        	temp = string[i] - 97;
        	printf("%s ", MORSE_ALPHABET[temp]);
	}
}
