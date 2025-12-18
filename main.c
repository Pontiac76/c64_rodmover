
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <peekpoke.h>
#include <string.h>
#include <c64.h>
#include <cbm_petscii_charmap.h>

#include "common.h"
//#link "common.c"

typedef struct {
  char bin;
  char time;
} job;

typedef struct {
  job task[50];
} jobs;

jobs TheJobs[5];

void main(void) {
  printf("\nHello World!\n");
  //getchar();
}
