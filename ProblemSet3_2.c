
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]) {
  if(argc < 3) {
    printf("Please input a word and a key for Caesar Cipher.\n");
    return 1;
  }

  // Access the arguments passed in by the users
  int len = strlen(argv[1]); // Get the length of plaintext
  int key = atoi(argv[2]); // Get the key by converting a string to an integer
  char str[100]; // An array of characters (string) that hold 100 characters

  // Print the plaintext
  printf("plaintext: %s\n", argv[1]);

  // IMPEMENT YOUR ENCRYPTION ALGORITHM RIGHT BELOW THESE COMMENTS ON LINE 24.
  // Encrypt the plain text using Caesar Cipher
  // Hint: access each character in argv[1] and assign
  // the encrypted characters one by one into the str variable.
  
  // Terminate the string with \0 to make sure compiler knows the end of string
  str[len] = '\0';

  // Print the cyphertext
  printf("cyphertext: %s\n", str);

  // IMPEMENT YOUR DECRYPTION ALGORITHM RIGHT BELOW THESE COMMENTS ON LINE 32.
  // Decrypt the cyphertext using Caesar Cipher
  // Hint: access each character in str and assign
  // the decrypted characters one by one into the str variable.
  

  // Print the decrypted cyphertext
  printf("decrpted: %s\n", str);

  return 0;
}