#include <stdio.h>

main()
{
  char           ch = ' ';
  int            int_num = 0;
  float          flt_num = 0.0f;
  long int       long_int_num = 0;
  long long int  long_long_int_num = 0;

  printf("the sizeof a  char is: %d-byte\n", sizeof(char));
  printf("the sizeof an int  is: %d-byte \n", sizeof(int));
  printf("the sizeof a  float is : %d-byte \n", sizeof(float));
  printf("the sizeof a  long int is:%d-byte \n",sizeof(long int));
  printf("the sizeof a  long long int is:%d-byte \n", sizeof(long long int));
  return (0);

}
