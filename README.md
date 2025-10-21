# Cryptography

For VSCode-based editors and Clang. Requires CodeLLDB extension. clangd extension is recommended.

An assignment for the DTU course Basic C Programming.

The program uses either Caesar or Vigenere to encrypt or decrypt an upper-case string provided through command-line interface. The key for Vigenere is also provided through CLI.

The user inputs 3 or 4 arguments using the command-line interface (in addition to the program name (argument 0)). The first argument controls whether to encrypt(e) or decrypt(d), the second argument controls which cipher is used (c for Caesar, v for Vigenere), the third argument is the string to be encrypted or decrypted, and the fourth argument is the key for Vigenere (not needed to use Caesar, so it is ignored if Caesar is called). Both the input string and the key are expected to be uppercase aplhabetic characters, anything else is ignored. 

Example input: ./main e v HELLOWORLD BERRY - IICCMXSICB

The Caesar encrypt function takes the input string, converts each uppercase alphapetic character in the string from its ASCII value to a 0-25 value, shifts +3, wraps around with %26 if needed and the converts it back into the ASCII range. After all uppercase alphabetic characters have been encrypted, the encrypted string is returned to the caller (the printf function called by CLI). The Caesar decrypt function works the same way, except the shift is -3 instead (for that reason it also adds the wrap around value 26, to avoid negative results from the %26).

The Vigenere encrypt function takes the user submitted string and key, converts each uppercase alphapetic character in both strings from their ASCII value to a 0-25 value, shifts the input string value with the key value, wraps around with %26 if needed and then converts the now encrypted character back into the ASCII range. After all uppercase alphabetic characters have been encrypted, the encrypted string is returned to the caller (the printf function called by CLI). The Vigenere decrypt function works the same way, except the shift value is substracted instead (for that reason it also adds the wrap around value 26, to avoid negative results from the %26).

These files are released under [CC0 1.0](LICENSE).
