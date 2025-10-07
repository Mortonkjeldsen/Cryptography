#include "cryptocaesar.h"
#include "cryptovigenere.h"
#include <stdio.h>
#include <string.h>

const char ERROR[] = "Invalid input, try again!";

int main(int argc, char *argv[]) {
  if (argc < 4 || argc > 5) {
    puts(ERROR);
  } else {
    if (strcmp(argv[1], "e") == 0) {
      if (strcmp(argv[2], "c") == 0) {
        printf("%s\n", caesar_encrypt(argv[3]));

      } else if (strcmp(argv[2], "v") == 0 && argc == 5) {
        printf("%s\n", vigenere_encrypt(argv[3], argv[4]));
      } else {
        puts(ERROR);
      }
    } else if (strcmp(argv[1], "d") == 0) {
      if (strcmp(argv[2], "c") == 0) {
        printf("%s\n", caesar_decrypt(argv[3]));
      } else if (strcmp(argv[2], "v") == 0 && argc == 5) {
        printf("%s\n", vigenere_decrypt(argv[3], argv[4]));
      } else {
        puts(ERROR);
      }
    } else {
      puts(ERROR);
    }
  }
}