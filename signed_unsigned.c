#include <stdio.h> 
#include <limits.h> 


int main(void)
{

  printf("Диапазон значений:\n"); 
  printf("signed from %d to %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char from 0 to %d\n", UCHAR_MAX);
  printf("signed short from %d to %d\n", SHRT_MIN, SHRT_MAX); 
  printf("unsigned short from 0 to %d\n", USHRT_MAX); 
  printf("signed int from %d to %d\n", INT_MIN, INT_MAX );
  printf("unsigned int from 0 to %u\n", UINT_MAX);  
  printf("signed long from %ld to %ld\n", LONG_MIN , LONG_MAX);  
  printf("unsigned long from 0 to %lu\n", ULONG_MAX);
    
return 0;

}