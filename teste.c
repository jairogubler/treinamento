#include <stdio.h>
#include <stdlib.h>

main() {
  time_t t = time(NULL);
  printf("time=%zu\n", t);
}
