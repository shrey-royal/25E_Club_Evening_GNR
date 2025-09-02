#include <stdio.h>

int main()
{
    char salary;

    // Input salary
    printf("Enter total salary: ");
    scanf("%c", &salary);

    // Classification

    printf("value :%c\n", salary);
    if (salary >= 100000)
    {
        printf("High income\n");
    }
    else if (salary >= 50000 && salary <= 99999)
    {
        printf("Middle income\n");
    }
    else if (salary >= 20000 && salary <= 49999)
    {
        printf("Low income\n");
    }
    else
    {
        printf("Very low income\n");
    }

    return 0;
}
