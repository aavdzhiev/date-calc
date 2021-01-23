#include <stdio.h>

const char* calculateDayOfTheWeek(short int day, short int month, short int year);
short int isLeap(short int year);
short int months_day(short int month, short int year);
        
int main(void)
{
    char i;

    do
    {
        short int day, month, year;
        printf("Enter Day, Month, and Year as DD MM YYYY: \n");
        scanf("%2hu%2hu%4hu", &day, &month, &year);
        printf("%s\n", calculateDayOfTheWeek(day, month, year));
        printf("Do you want to enter another date: (Y/N)\n");
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
    //Zeller’s Congruence
    short int dayOfWeek = (day + 13 * (month + 1) / 5 + lastTwoDigitsOfYear + lastTwoDigitsOfYear/4 + firstTwoDigitsOfYear/4 - 5*firstTwoDigitsOfYear) % 7;
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
            return "Error";
        break;
    }
}

short int isLeap(short int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
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
