/**
 * Short description of file.
 *
 * Author: Steve Matsumoto <stephanos.matsumoto@sporic.me>
 */

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 16

unsigned long KEY_VALIDATION = 11485346634355385221ul;

void getbuf(char* buf) {
  gets(buf);
}

int validate(char* key) {
  unsigned long hash = 5381;
  int c;
  while (c = *key++) {
    hash = ((hash << 5) + hash) + c;
  }
  return hash == KEY_VALIDATION;
}

void load_software() {
  puts("Loading software...bleep bloop blorp");
}

int main() {
  puts("Enter your 15-character license key:");
  char key[BUFFER_SIZE];
  getbuf(key);
  if (validate(key)) {
    load_software();
    return 0;
  }
  return 1;
}
