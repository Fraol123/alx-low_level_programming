#include <stdlib.h>
#include <time.h>
/*more headers goes there*/

/*betty style doc for function main goes there*/
int main(void)

{

int i;

srand(time(0));
i = rand() - RAND_MAX  /  2;
for (int i = 0; i < 100 ; i++)
{

putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar("%d", i);
}
return (0);
}
