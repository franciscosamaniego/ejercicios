#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  if (n >= 2) {
    for(int x = 0; x < n; x++) {
      if(x % 2 == 0) {
        printf("%d\n", x);
      }
    }
  } else printf("Error\n");
  return 0;
}
