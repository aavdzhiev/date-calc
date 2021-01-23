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
const char* calculateDayOfTheWeek(short int day, short int month, short int year);

int main(void)
{
    char i;

    do
    {
        short int day, month, year;
        printf("Enter Day, Month, and Year as DD MM YYYY: \n");
        scanf("%2hu%2hu%4hu", &day, &month, &year);
        printf("%s\n", calculateDayOfTheWeek(day, month, year));
        printf("Do you want to enter another date: (Y/N)");
        scanf(" %c", &i);
    } while (i == 'y' || i == 'Y');

    return 0;
}

const char* calculateDayOfTheWeek(short int day, short int month, short int year){
    short int firstTwoDigitsOfYear = year/100;
    short int lastTwoDigitsOfYear = year%100;
    if (month == 1) {
        month = 13;
        year--;
    }
    if (month == 2) {
        month = 14;
        year--;
    }
    short int dayOfWeek = (day + 13 * (month + 1) / 5 + lastTwoDigitsOfYear + lastTwoDigitsOfYear/4 + firstTwoDigitsOfYear/4 - firstTwoDigitsOfYear) % 7;
    switch(dayOfWeek){
        case 1:
            return "Sunday";
        break;
        case 2:
            return "Monday";
        break;
        case 3:
            return "Tuesday";
        break;
        case 4:
            return "Wednesday";
        break;
        case 5:
            return "Thursday";
        break;
        case 6:
            return "Friday";
        break;
        case 0:
            return "Saturday";
        break;
        default: 
            return "error";
        break;
    }
}