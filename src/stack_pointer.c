/**
 * Short description of file.
 *
 * Author: Steve Matsumoto <stephanos.matsumoto@sporic.me>
 */

#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/personality.h>

uint64_t getsp() {
  uint64_t sp;
  asm("mov %%rsp, %0" : "=rm" (sp));
  return sp;

}

int main(int argc, char *argv[]) {
  personality(ADDR_NO_RANDOMIZE);
  printf("%p\n", getsp()); // and this line will print esp
  return 0;
}
