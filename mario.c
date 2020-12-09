#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n;

    do
    {
        n = get_int("Height: ");

        //printf("%i", n);
    }
    while (n < 1 || n > 8);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = n; k >= i; k--)
        {
            printf("#");
        }
        printf("\n");
    }

}
