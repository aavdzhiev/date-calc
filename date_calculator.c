#include <stdio.h>
// input ден месец година
// while menu - DONE
// 
// function for leapYear()
// function to calculate day of the week
// function to calc days in month - takes year as input returns days short int
//
// output %d.%d.%dddd се пада събота.
//        Този месец има %d дни.
//        Годината (не) е високосна.
short int leapYear(int year);

int main(void)
{
    char i;

    do
    {
        short int day, month, year;
        printf("Enter Day, Month, and Year as DD MM YYYY: \n");
        scanf("%2hu%2hu%4hu", &day, &month, &year);

        printf("%hu,%hu,%hu\n", day, month, year);

    } while (i == 'y');

    return 0;
}
