/**
 * Short description of file.
 *
 * Author: Steve Matsumoto <stephanos.matsumoto@sporic.me>
 */

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

void getbuf() {
  char key[BUFFER_SIZE];
  gets(key);
}

int main() {
  puts("Enter your 15-character license key:");
  getbuf();
  return 0;
}
