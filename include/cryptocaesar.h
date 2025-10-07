#pragma once
/** @file cryptocaesar.h
 *  @brief Caesar cipher only defined for upper-case ASCII
 */

/**
 * @brief Encrypt an upper-case string with Caesar in-place
 *
 * @note Only uppercase alphabetic letters are encrypted
 * @param plaintext String to be encrypted
 * @return char* Same string encrypted
 */
char *caesar_encrypt(char *plaintext);

/**
 * @brief Decrypt an upper-case string with Caesar in-place
 *
 * @note Only uppercase alphabetic letters are decrypted
 * @param ciphertext String to be decrypted
 * @return char* Same string decrypted
 */
char *caesar_decrypt(char *ciphertext);