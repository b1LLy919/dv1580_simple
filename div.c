#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int is_number(const char *str)
{
  char *endptr;
  errno = 0;
  long val = strtol(str, &endptr, 10);
  
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
    float nummber_one = atof(argv[1]);
    float nummber_two = atof(argv[2]);

    float sum = nummber_one / nummber_two;

    if (nummber_one != 0 && nummber_two == 0)
    {
      printf("DIV ZERO NOT ALLOWED!\n");
    }
    else
    {
      printf("%f / %f = %f\n", nummber_one, nummber_two, sum);
    }
    }

  return 0;
}
