/* Prints a table of square using a for statement*/
//TODO

#include<stdio.h>

int main(void)
{
    int n;
    short i;

    printf("This program prints a table of square\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);


    /**/
    return 0;
}