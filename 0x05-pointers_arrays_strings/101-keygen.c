#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** 
 *main- genrate password
 *Return:nothing
 */
int main(void)
{
srand((unsigned int)time(NULL));
char pass[13];
int i;


for (i = 0; i < 4; i++)
{

pass[3 * i] = '0' + (rand() % 10);
char capLetter = 'A' + (rand() % 26);

pass[(3 * i) + 1] = capLetter;
char letter = 'a' + (rand() % 26);

pass[(3 * i) + 2] = letter;
}
pass[3 * i] = '\0';
printf("generated password : %s\n\n", pass);

printf("\n\n");
return (0);
}
