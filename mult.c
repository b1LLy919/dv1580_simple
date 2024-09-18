#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int is_number(const char *str)
{
  char *endptr;
  errno = 0;
  double val = strtod(str, &endptr);
  
  if (errno == ERANGE || (endptr == str))
  {
    return 0;
  }

  return 1;
}

int main(int argc, char *argv[])
{
  if (is_number(argv[1]) && is_number(argv[2]))
  {
    double nummber_one = atof(argv[1]);
    double nummber_two = atof(argv[2]);

    double sum = nummber_one * nummber_two;

    printf("%.4f\n", sum);
  }

  return 0;
}
