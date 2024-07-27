#include <stdio.h>
#include <stdint.h>

// main function -
// where the execution of program begins
int main()
{

  int32_t t;
  int32_t a;

  a = -5;
  printf("a = %d\n", a);
  printf("a >> 1 = %d\n", a >> 1);
  printf("a >> 2 = %d\n", a >> 2);
  printf("a >> 3 = %d\n", a >> 3);
  printf("a >> 4 = %d\n", a >> 4);

  printf("\n");

  
  /* Absolute value */

  t = a >> 31;
  printf("a >> 31 = %d\n", t);

  printf("t & 2*a = %d\n", (t& 2*a));

  
  t = a - (t & 2*a);

  printf("|a| = %d\n", t);
  
  return 0;
}
