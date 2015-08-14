#include <stdio.h>

//symbolic constants
#define LOWER 0
#define UPPER 300
#define STEP  20

void fst();

int main() {
  //simple hello World
  printf("Hello World\n");

  //Fahrenheit-Celcius Table
  fst();

  return 0;
}

void fst() {
  /*
  Print Fahrenheit-Celcius Table */

  float fahr, celcius;

  fahr = LOWER;

  printf("------------\n");
  printf("C \t F\n");
  printf("------------\n");
  while(fahr <= UPPER) {
    celcius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celcius);
    fahr = fahr + STEP;
  }
}
