#0x0D-preprocessor

ssor

README.md

C - Preprocessor
TASKS
0. Object-like Macro
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
1. Pi
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
2. File name
Write a program that prints the name of the file it was compiled from, followed by a new line.

You are allowed to use the standard library

3. Function-like macro
Write a function-like macro ABS(x) that computes the absolute value of a number x.
4. SUM
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
 <stdio.h>
#include <stdlib.h>
char **strtow(char *str) 
  // Check if the input string is NULL or empty.
  if (str == NULL || str[0] == '\0') {
    return NULL;
  }
  // Allocate memory for the array of strings.
  char **words = malloc(sizeof(char *) * (strlen(str) + 1));
  if (words == NULL) {
    return NULL;
  }
  // Initialize the index of the current word.
  int i = 0;
  // Iterate over the input string, one character at a time.
  for (int j = 0; str[j] != '\0'; j++) {
    // Check if the current character is a space.
    if (str[j] == ' ') {
      // Terminate the current word.
      words[i] = strndup(str + i, j - i);
      i = j + 1;
    }
  }
  // Terminate the last word.
  words[i] = strndup(str + i, strlen(str) - i);
  // Return the array of strings.
  return words;
}
#include <stdlib.h>
char **strtow(char *str) 
  // Check if the input string is NULL or empty.
  if (str == NULL || str[0] == '\0') {
    return NULL;
  }
  // Allocate memory for the array of strings.
  char **words = malloc(sizeof(char *) * (strlen(str) + 1));
  if (words == NULL) {
    return NULL;
  }
  // Initialize the index of the current word.
  int i = 0;
  // Iterate over the input string, one character at a time.
  for (int j = 0; str[j] != '\0'; j++) {
    // Check if the current character is a space.
    if (str[j] == ' ') {
      // Terminate the current word.
      words[i] = strndup(str + i, j - i);
      i = j + 1;
    }
  }
  // Terminate the last word.
  words[i] = strndup(str + i, strlen(str) - i);
  // Return the array of strings.
  return words;
}
