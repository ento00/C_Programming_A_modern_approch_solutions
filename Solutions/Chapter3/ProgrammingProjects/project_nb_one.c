#include<stdio.h>

int main(int argc, char const *argv[])
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%.2d%.2d\n", year, month, day);
    return 0;
}
