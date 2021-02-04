#include <stdio.h>
/**
 *size off cheacker
 *
 * Main entery point
 *
 *Return always 0 (success)
 */

main()

{
char           ch = ' ';
int            int_num = 0;
float          flt_num = 0.0f;
long int       long_int_num = 0;
long long int  long_long_int_num = 0;

printf("sizeof a  char is : %d - byte\n", sizeof(char));
printf("sizeof an int  is : %d - byte\n", sizeof(int));
printf("sizeof a  float is : %d - byte\n", sizeof(float));
printf("sizeof a  long int is : %d - byte\n", sizeof(long int));
printf("sizeof a  long long int is : %d - byte\n", sizeof(long long int));
return (0);

}
