const int SHIFT = 3;
static const int WRAP_AROUND = 26;

char *caesar_encrypt(char *plaintext) {
  for (int i = 0; plaintext[i] != '\0'; ++i) {
    if (plaintext[i] >= 'A' && plaintext[i] <= 'Z') {
      plaintext[i] = ((plaintext[i] - 'A' + SHIFT) % WRAP_AROUND) + 'A';
    }
  }
  return plaintext;
}

char *caesar_decrypt(char *ciphertext) {
  for (int i = 0; ciphertext[i] != '\0'; ++i) {
    if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
      ciphertext[i] =
          ((ciphertext[i] - 'A' - SHIFT + WRAP_AROUND) % WRAP_AROUND) + 'A';
    }
  }
  return ciphertext;
}