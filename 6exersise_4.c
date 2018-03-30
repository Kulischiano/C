#include <stdio.h> 
#include <stdbool.h> 

int main(void) 
{ 
float number, accumulator; 
char operator; 

accumulator = 0.0; 
operator = 'S'; 

printf("Начало рассчета\n"); 

while ( true ) 
{ 
scanf("%f %c", &number, &operator); 

if ( operator == 'E' ) 
{ 
printf("= %.6f\n", accumulator); 
printf("Конец рассчетов\n"); 
break; 
} 

switch (operator) 
{ 
case 'S': 
accumulator = number; 
printf("= %.6f\n", accumulator); 
break; 
case '+': 
accumulator += number; 
printf("= %.6f\n", accumulator); 
break; 
case '-': 
accumulator -= number; 
printf("= %.6f\n", accumulator); 
break; 
case '*': 
accumulator *= number; 
printf("= %.6f\n", accumulator); 
break; 
case '/': 
( number == 0 ) ? printf("Деление на ноль!\n") : printf("= %.6f\n", accumulator /= number); 
break; 
default: 
printf("Набран неверный оператор!\n"); 
break; 
} 
} 

return 0; 
}