#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*Function to print the alphabet*/
/*retrn always zero*/
 
int main(void)
{
char x; 
for ( x = 'A'; x <= 'Z'; x++)
{
char lower_x = tolower(x);
putchar(lower_x );
 putchar('\n');
}
return (0);
}
