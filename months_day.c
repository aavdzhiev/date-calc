#include <stdio.h>

short int months_day(short int month, short int x);

int main(void)
{
        char i = 0;

        do {
                short int day, month, year;
                printf("Enter Day, Month, and Year as DD MM YYYY: \n");
                scanf("%2hu%2hu%4hu", &day, &month, &year);
                printf("%hu,%hu,%hu\n", day, month, year);
                
                printf("Days in month: %hu\n", months_day(month,year));

        } while (i == 'y');

        return 0;
}

short int months_day(short int month, short int year){
        short int days = 31;
        
        if (month == 4 || month == 6 || month == 9 || month == 11)
                days = 30;

        else if (month == 2) {
                if ((((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) == 0)
                        days = 29;
                else
                        days = 28;                
        }

        
        return days;
}
