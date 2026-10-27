#include <stdio.h>
#include "config.h"

int main() {
  printf("version: %s.%s.%s", PROJECT_VER_MAJOR, PROJECT_VER_MINOR, PROJECT_VER_PATCH);
}

