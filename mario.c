#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("height: ");
    }
    while (height < 1 || height > 8);
    // creating rows
    for (int i = 0; i < height; i++)
    {
        // print space
        for (int space = height - 1; space > i; space--)
        {
            printf(" ");
        }
        // print hash
        for (int hash = 0; hash < i + 1; hash++)
        {
            printf("#");
        }
        {
            printf("\n");
        }
    }
}
