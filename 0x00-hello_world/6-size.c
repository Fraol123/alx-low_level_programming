#include <stdio.h>

main()
{
  char           ch = ' ';
  int            int_num = 0;
  float          flt_num = 0.0f;
  long int       long_int_num = 0;
  long long int  long_long_int_num = 0;

  printf("the sizeof  char is: %d-byte\n", sizeof(char));
  printf("the sizeof  ch   is :%d-byte\n", sizeof ch );
  printf("the sizeof  int is: %d-byte \n", sizeof(int));
  printf("the sizeof int_num is :%d-byte \n",sizeof int_num);
  printf("the sizeof float is :%d-byte \n", sizeof(float));
  printf("the sizeof flt_num is:%d-byte \n", sizeof flt_num);
  printf("the sizeof long int is:%d-byte \n",sizeof(long int));
  printf("the sizeof long_int_num is:%d-byte \n",sizeof long_int_num);
  printf("the sizeof long long int is:%d-byte \n", sizeof(long long int));
  printf("the sizeof long_long_int_num is :%d-byte \n",sizeof long_long_int_num);
  return (0);

}
