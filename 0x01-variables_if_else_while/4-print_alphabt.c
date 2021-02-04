#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*alphabets in lower case*/
/*excluding q and e*/

int main(void)
{
  char x;
  for (x = 'A'; x <= 'Z'; x++)
{
  char lower_x = tolower(x);
  putchar(lower_x);
}
  return (0);
}
