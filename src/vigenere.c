static const int WRAP_AROUND = 26;

int k;
int shift;

char *vigenere_encrypt(char *plaintext, char *key) {
  k = 0;
  for (int i = 0; plaintext[i] != '\0'; ++i) {
    if (plaintext[i] >= 'A' && plaintext[i] <= 'Z') {
      if (key[k] == '\0')
        k = 0;
      if (key[k] >= 'A' && key[k] <= 'Z') {
        shift = key[k] - 'A';
        plaintext[i] = ((plaintext[i] - 'A' + shift) % WRAP_AROUND) + 'A';
      }
      ++k;
    }
  }
  return plaintext;
}

char *vigenere_decrypt(char *ciphertext, char *key) {
  k = 0;
  for (int i = 0; ciphertext[i] != '\0'; ++i) {
    if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
      if (key[k] == '\0')
        k = 0;
      if (key[k] >= 'A' && key[k] <= 'Z') {
        shift = key[k] - 'A';
        ciphertext[i] =
            ((ciphertext[i] - 'A' - shift + WRAP_AROUND) % WRAP_AROUND) + 'A';
      }
      ++k;
    }
  }
  return ciphertext;
}