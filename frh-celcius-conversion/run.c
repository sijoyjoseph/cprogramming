#include <stdio.h>

#define step 20

int main() {
  float celsius;
  float farh = 0;

  printf("Farh to celsius conversion\n\n\n");

  while(farh <= 300) {
    celsius = (5 * (farh - 32) / 9);
    printf("%3.0f\t%6.1f\n", farh, celsius);
    farh = farh+step;
  }

  return 0;
}
