#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Hello!\n");

  // parse comand line arguments
  printf("There are %d command line arguments.\n", argc);
  printf("They are:\n");
  
  int i;
  for(i = 0; i < argc; i++) {
    printf(" %d: %s\n", i, argv[i]);
  }
  
  float f = 0;
  printf("f = %f\n", f);
  f = 42.0;
  printf("f = %f\n", f);
  f = f /3.;
  printf("f = %.10f\n", f);
  double g;
  g = 41.0 / 3.;

  int A[10];

  //fill A and print
  for(i = 0; i < 10; i++) {
    A[i] = i;
    printf("A[%d] = %d\n", i, A[i]);
  }

  // variable-length array
  int B[argc];

  // fill B and print
  for(i = 0; i < argc; i++) {
    B[i] = i;
    printf("B[%d) = %d\n", i, B[i]);
  }

  // dynamically allocated array
  int *C; // telling c (language) that C (variable) is beg of seq ints
  if(argc >1) {
    int clen = atoi(argv[1]);

  // allocate Cs memory
  C = malloc(clen * sizeof(int));

  // fill C and print
  for(i = 0; i < clen; i++) {
    C[i] = i;
    printf("C[%d] = %d\n", i, C[i]);
   }
  free(C);
  }

  //read files
  float a = 0.;
  float b = 0.;
  float c = 0.;
  read("input", &a, &b, &c);

 
  return EXIT_SUCCESS;
}
