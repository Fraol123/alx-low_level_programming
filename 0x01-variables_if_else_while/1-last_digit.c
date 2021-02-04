B#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int id;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (id > 5)

{
printf("last digit of %d is %d  and is greter than 5\n", n, id);

}

if (id == 0)

{

printf("last digit of %d is %d  and is 0\n", n, id);

}

if (id < 6)

{

printf("last digit of %d is %d and less than 6 and not 0 \n", n, id);

}


return (n % 10);
}
