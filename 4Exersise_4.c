#include <stdio.h> 

int main(void) 
{ 
float F = 27.0; 

float C = (F - 32) / 1.8; 

printf("Ответ %.1f по Фаренгейту в Цельсиях %.1f\n", F, C); 

return 0; 
}