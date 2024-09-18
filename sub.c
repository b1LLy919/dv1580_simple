#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int nummber_one = atoi(argv[1]);
  int nummber_two = atoi(argv[2]);

  int sum = nummber_one - nummber_two;

  printf("%d - %d = %d\n", nummber_one, nummber_two, sum);
  
  return 0;
}
