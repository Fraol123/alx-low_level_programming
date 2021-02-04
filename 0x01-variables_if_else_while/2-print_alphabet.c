#include <stdio.h>
/*Function to print the alphabet*/
/*in lower case*/

int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar(lower_x);
}
return (0);
}
