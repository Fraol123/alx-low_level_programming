#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*Function to print the alphabet*/

/*in reverse lower case*/
int main(void)
{
char x;
for (x = 'Z'; x >= 'A'; x--)
{
char lower_x = tolower(x);
putchar(lower_x);
}
return (0);
}
