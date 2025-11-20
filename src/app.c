#include "app.h"

#include <stdio.h>

void greet(const char *name) {
  if (name && *name) {
    printf("Hello, %s!\n", name);
    return;
  }

  puts("Hello, C project!");
}
