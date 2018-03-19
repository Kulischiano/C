#include <stdio.h> 

int main(void) 
{ 
int i = 365; 
int j = 7; 
printf("Следующая переменная %i and %i это %i\n", i, j, i + j - i % j); 

int k = 12258; 
int l = 23; 
printf("Следующая переменная %i and %i это %i\n", k, l, k + l - k % l); 

int m = 996; 
int n = 4; 
printf("Следующая переменная %i and %i это %i\n", m, n, m + n - m % n); 

return 0; 
}