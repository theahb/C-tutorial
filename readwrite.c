#include <stdio.h>

#include "readwrite.h"

void read (char *fname, float *a, float *b, float *c) {
  // open file
  FILE *fin = fopen(fname, "r");

  //read file
  fscanf(fin, "a = %f\n", a);
  fscanf(fin, "b = %f\n", b);
  fscanf(fin, "c = %f\n", c);

  printf("a = %f\nb = %f\nc = %f\n", *a, *b, *c);


  // close file
  fclose(fin); 
}
