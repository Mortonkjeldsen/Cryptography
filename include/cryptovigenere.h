#pragma once
/** @file cryptovigenere.h
 *  @brief Vigenere cipher only defined for upper-case ASCII
 */

/**
 * @brief Encrypt an upper-case string with Vigenere in-place
 *
 * @note Only upper-case alphapetic letters are encrypted
 * @param plaintext String to be encrypted
 * @param key Key used for encryption
 * @return char* Same string encrypted
 */
char *vigenere_encrypt(char *plaintext, char *key);

/**
 * @brief Decrypt an upper-case string with Vigenere in-place
 *
 * @note Only upper-case alphapetic letters are decrypted
 * @param ciphertext String to be decrypted
 * @param key Key used for decryption
 * @return char* Same string decrypted
 */
char *vigenere_decrypt(char *ciphertext, char *key);