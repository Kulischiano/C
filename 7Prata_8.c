#include <stdio.h>
#define REGULAR 40.0
#define PAYRATE 10.0 
#define RATE1 0.15 
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300.0
#define BREAK2 150.0
#define TAX1 (RATE1 * BREAK1)
#define TAX2 (RATE2 * BREAK2)

void calcPay();
void showMenu();

int main(void)
{
    int input;

    showMenu();
    while(scanf("%d", &input)==1)
    {
        if(input==5)
            break;
        
        if(input <= 4)
            calcPay(input);
        
        else
            printf("Попробуйте снова\n");
            showMenu();
    }

    return 0;
}

void showMenu()
{
    printf("Желаемая ставка:\n");
    printf("\n");
    printf("1) $8.75/час\n");
    printf("2) $9.33/час\n");
    printf("3) $10.00/час\n");
    printf("4) $11.20/час\n");
    printf("5) выход\n");
}


void calcPay(int num)
{
    double hrly, hours, pay, taxes, netpay;
    switch(num)
    {
        case 1 : hrly = 8.75;
        break;
        case 2 : hrly = 9.33;
        break;
        case 3 : hrly = PAYRATE;
        break;
        case 4 : hrly = 11.20;
        break;
        default : break;
    }

    printf("Количество отработанных часов:\n");
    scanf("%lf", &hours);

    if(hours <= REGULAR)
        pay = hours * hrly;
    else if(hours > REGULAR)
        pay = (hrly * REGULAR) + ((hours - REGULAR) * (hrly * 1.5));

    if(pay == BREAK1)
        taxes = TAX1;
    
    else if(pay < BREAK1)
        taxes = pay * RATE1;

    else if(pay > BREAK1 + BREAK2)
        taxes = TAX1 + TAX2 + (pay - (BREAK1 + BREAK2)) * RATE3;
    
    else if(pay > BREAK1)
        taxes = TAX1 + ((pay - BREAK1)) * RATE2;

    netpay = pay - taxes;

    printf("Отработано: %0.2lf\n", hours);
    printf("Зарплата без вычетов: $%0.2lf\n", pay);
    printf("Сумма налогов $%0.2lf\n", taxes);
    printf("Зарплата после вычетов is $%0.2lf\n", netpay);
    printf("\n");
}
