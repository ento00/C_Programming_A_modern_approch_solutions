#include<stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, r;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n > 0)
    {   
        r = m%n;
        m = n; 
        n = r;
    }

    printf("Greatest common divisor: %d", m);
    
    
    return 0;
}
