#include <stdlib.h>
#include <sys/personality.h>

int main(int argc, char *argv[], char *envp[]) {
  personality(ADDR_NO_RANDOMIZE);
  argv[0] = "./bigbuf";
  execve(argv[0], argv, envp);
}
