#include <stdlib.h>
#include <time.h>
/*decides on number*/
/*betty style doc for function main goes there*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Enter any number : \n");

scanf(" %d ", &n);
if (n == 0)
{
printf("The number is zero \n");

}
if (n > 0)
{
printf("The number is postive \n");
}
if (n < 0)
{

printf("The number is negative \n");

}
return (0);
}
