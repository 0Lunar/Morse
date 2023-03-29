#include <alloca.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOLOWER(ch) (((ch) >= 'A' && (ch) <= 'Z') ? ((ch) - 'A' + 'a') : (ch))

static char MORSE_ALPHABET[42][30] = {
    ".-",    "-...",    "-.-.",   "-..",    ".",      "..-.",   "--.",
    "....",  "..",      ".---",   "-.-",    ".-..",   "--",     "-.",
    "---",   ".--.",    "--.-",   ".-.",    "...",    "-",      "..--",
    "...-",  ".--",     "-..-",   "-.--",   "--..",   ".----",  "..---",
    "...--", "....-",   ".....",  "-....",  "--...",  "---..",  "----.",
    "-----", ".......", "--..--", ".-.-.-", "---...", "..--..", "-.-.--"};

void convert_to_morse(char string[40]) {
  int temp = 0;
  for (int i = 0; i < strlen(string); i++) {
  char formatted_string = TOLOWER(string[i]);
    temp = formatted_string - 97;
    printf("%s ", MORSE_ALPHABET[temp]);
  }
}
