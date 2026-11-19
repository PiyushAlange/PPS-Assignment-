#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter the first number: ");
    if (scanf("%d", &a) != 1)
    {
        printf("Invalid input.");
        return 0;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &b) != 1)
    {
        printf("Invalid input.");
        return 0;
    }

    printf("\nBefore Swapping:\n");
    printf("First number = %d, Second number = %d\n", a, b);

    swap(&a, &b);

    printf("\nAfter Swapping:\n");
    printf("First number = %d, Second number = %d\n", a, b);

    return 0;
}